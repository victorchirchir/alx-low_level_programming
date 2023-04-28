#include <stdlib.h>
#include <stdio.h>
/**
 * print_before - prints statement before main is executed
 * Return:void
 */
void __attribute__ ((constructor)) print_before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
