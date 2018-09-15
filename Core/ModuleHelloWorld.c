#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LECENSE("GPL");
MODULE_AUTHOR("Jun");

static int __init hello_init(void)
{
    printf(KERN_ALERT "(init)Hello,World!\n");
    return 0;
}

static void __exit hello_exit(void)
{
    printk(KERN_ALERT "(exit)Hello,World!\n");
}


module_init(hello_init);
module_exit(hello_exit);
