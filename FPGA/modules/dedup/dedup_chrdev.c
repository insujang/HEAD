#include "dedup_chrdev.h"


static int dedup_chrdev_open(struct inode *inode, struct file *file){
    u32 reg;

    printk(KERN_INFO "device open(%p,%p)\n", inode, file);

    // Disable auto restart
    iowrite32(0, lp->base_addr);

    // Enable global interrupt
    iowrite32(1, lp->base_addr + 0x4);

    // Enable interrupt source for ap_done
    reg = ioread32(lp->base_addr + 0x8);
    iowrite32(reg | 1, lp->base_addr + 0x8);

    try_module_get(THIS_MODULE);
    
    return 0;
}

static int dedup_chrdev_release(struct inode *inode, struct file *file){
    printk(KERN_INFO "device release(%p,%p)\n", inode, file);
    module_put(THIS_MODULE);

    return 0;
}

static ssize_t dedup_invoke(struct file *file, const char __user *buffer,
                            size_t length, loff_t *offset){
    u32 reg;
    
    printk(KERN_INFO "Invoking Deduplication PL.\n");
    reg = ioread32(lp->base_addr);
    printk("ap_start: %d\n", reg & 1);
    printk("ap_done: %d\n", (reg >> 1) && 1);
    printk("ap_idle: %d\n", (reg >> 2) && 1);
    printk("ap_ready: %d\n", !(reg & 1));

    // Initiate PL execution
    iowrite32(reg | 1, lp->base_addr);
    return 0;
}


static struct file_operations fops = {
    .owner = THIS_MODULE,
    .write = dedup_invoke,
    .open = dedup_chrdev_open,
    .release = dedup_chrdev_release,
};


static dev_t dev;
static struct class *cdev_class = NULL;
static struct cdev cdev;

#define DEVICE_NAME "dedup"

static int chrdev_initialize(void){
    int rc;

    // Get a range of minor numbers to work with
    // Minor numbers start at 0
    rc = alloc_chrdev_region(&dev, 0, 1, DEVICE_NAME);
    if(rc < 0){
        printk(KERN_ERR "Unable to allocate character device region.\n");
        return rc;
    }

    // Create a device class
    cdev_class = class_create(THIS_MODULE, DEVICE_NAME);
    if(IS_ERR(DEVICE_NAME)){
        rc = -1;
        printk(KERN_ERR "Unable to create a device class.\n");
        goto unregister;
    }

    // Create a device for our module. This will create a file on /dev/dedup
    if(device_create(cdev_class, NULL, dev, NULL, DEVICE_NAME) == NULL){
        rc = -1;
        printk(KERN_ERR "Unable to add a character device.\n");
        goto unregister;
    }

    // Register our character device to the kernel
    cdev_init(&cdev, &fops);
    rc = cdev_add(&cdev, dev, 1);
    if(rc < 0){
        printk(KERN_ERR "Unable to add a character device.\n");
        goto destroy;
    }

    printk(KERN_INFO "Successfully created a character device.\n");

    return 0;

destroy:
    device_destroy(cdev_class, dev);
    class_destroy(cdev_class);
unregister:
    unregister_chrdev_region(dev, 1);

    return rc;
}

static void chrdev_destroy(void){
    cdev_del(&cdev);
    device_destroy(cdev_class, dev);
    class_destroy(cdev_class);
    unregister_chrdev_region(dev, 1);
    printk(KERN_INFO "Successfully destroyed a character device.\n");
}
