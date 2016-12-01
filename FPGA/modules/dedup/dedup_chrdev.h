#ifndef DEDUP_CHRDEV_H
#define DEDUP_CHRDEV_H

#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/io.h>
#include <linux/interrupt.h>

#include <linux/of_address.h>
#include <linux/of_device.h>
#include <linux/of_platform.h>
#include <linux/cdev.h>
#include <linux/fs.h>
#include <linux/device.h>
#include <linux/types.h>

#include "dedup.h"

static int chrdev_initialize(void);
static void chrdev_destroy(void);

#endif
