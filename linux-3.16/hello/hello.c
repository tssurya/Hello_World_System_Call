#include<linux/kernel.h>
asmlinkage long sys_hello(void)
{
	printk("Amma says , Hello World\n");
	return 0;
}
