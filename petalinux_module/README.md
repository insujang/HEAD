# Creating Hello Petalinux kernel module

This hello kernel module is a pair program with the user space application `axidma_test`. The kernel module runs at kernel space, however, and provides an interface for Xilinx `Adder` custom IP, which is implemented in Zynq-7000 Zedboard Programmable Logic.

### 1. Downloading Petalinux
You have to download Petalinux from Xilinx in [[here]](https://www.xilinx.com/support/download/index.html/content/xilinx/en/downloadNav/embedded-design-tools.html).
Be careful about Petalinux version that you should install the same version with that of your Xilinx Vivado design suite.
We used Petalinux 2016.2 and Vivado design suite 2016.2.

### 2. Setting up Petalinux tools
By typing the following command, you are able to use several useful Petalinux commands.
```
$ source <petalinux_root_dir>/settings.sh
```

You can verify the Petalinux working environment has been set by checking:
```
$ echo $PETALINUX
/home/insujang/cs710/petalinux/petalinux-v2016.2-final
```

### 3. Creating a Petalinux project
By typing the following commands, a new project directory will be created.
```
$ petalinux-create -t project -s -n <PROJECT_NAME> --template zynq
```
For example, we created a Petalinux project named `petalinux_customip` by the following commands:
```
~/cs710/petalinux$ petalinux-create --type project 
--name petalinux_customip --template zynq
```

### 4. Importing hardware description file (.hdf)
You can customize the Petalinux project with your hardware from Vivado by using `petalinux-config` command with  `--get-hw-description` flag.

Assume that your Vivado project directory is `~/cs710/xilinx_workspace/customip`.
```
~/cs710/xilinx_workspace/customip/customip.sdk$ petalinux-config 
--get-hw-description -p ~/cs710/petalinux/petalinux_customip
```
This command will copy your `design_wrapper.hdf` to your Petalinux project.

### 5. Creating a kernel module
You may compile your kernel module individually, however, it would be much easier to use the command provided by Petalinux.
The following command will create a kernel module as well as import it in the kernel.
```
$ petalinux-create --type modules -n <module_name> --enable
```

Our module name is `hello`, which can be created by the following command.
```
~/cs710/petalinux/petalinux_customip$ petalinux-create
--type modules -n hello --enable
```
After creating the module, files for the module should be in `components/modules/<module_name>`. Copy `hello.c` in this Github directory into the Petalinux module directory, e.g. `compononets/modules/hello/hello.c`.

### 6. Adding a device into a device tree
We need a device that is not included in our Vivado block diagram for DMA functionality. As we use [this DMA library](https://github.com/bperez77/xilinx_axidma) for our DMA operation, please follow the section [Setting Up the Driver](https://github.com/bperez77/xilinx_axidma#user-content-setting-up-the-driver).

Setting Linux kernel is done automatically by Petalinux, and only thing that you have to do is to add an `axidma_chrdev` device in a PL device tree.
The device tree file `pl.dtsi` is located in `subsystems/linux/configs/device-tree/pl.dtsi`.

```
axidma_chrdev: axidma_chrdev@0 {
    compatible = "xlnx,axidma-chrdev";
    dmas = <&axi_dma_0 0 &axi_dma_0 1>;
    dma-names = "tx_channel", "rx_channel";
};

adder_0: adder@43c00000 {
    ....
};

axi_dma_0: axi_dma@40400000 {
    compatible = "xlnx,axi-dma-1.00.a";
    interrupt-parent = <&intc>;
    interrupts = <0 29 4 0 30 4>;
    reg = <0x40400000 0x10000>;
    xlnx,include-sg ;
    dma-channel@40400000 {
        compatible = "xlnx,axi-dma-mm2s-channel";
        dma-channels = <0x1>;
        interrupts = <0 29 4>;
        xlnx,datawidth = <0x20>;
        xlnx,device-id = <0x0>;
    };
    dma-channel@40400030 {
        compatible = "xlnx,axi-dma-s2mm-channel";
        dma-channels = <0x1>;
        interrupts = <0 30 4>;
        xlnx,datawidth = <0x20>;
        xlnx,device-id = <0x1>;
    };
};
```
Or, just copy `pl.dtsi` in this Github directory into `subsystems/linux/configs/device-tree/pl.dtsi`.

### 7. Building Petalinux
Now we are ready to build our own Petalinux. `petalinux-build` will build a Petalinux image.
```
~/cs710/petalinux/petalinux_customip$ petalinux-build
```
For more verbose information, please add a flag `-v`.

After build completed, you should package all output into one `BOOT.BIN` file by using `petalinux-package`.
```
~/cs710/petalinux/petalinux_customip$ cd images/linux
~/cs710/petalinux/petalinux_customip/images/linux$ petalinux-package
--boot --fsbl zynq_fsbl.elf --fpga design_1_wrapper.bit --u-boot
```
Add `--force` flag if you want to overwrite the existing `BOOT.BIN` file.
This command will create `BOOT.BIN` file in the same directory.

### 8. Booting from SD card
Copy `BOOT.BIN` and `image.ub` into your SD card and boot Zedboard with it.
You should set jumpers JP9 and JP10 up to make your Zedboard boot from SD card.