#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name-uses a func to print a name
 * @name:name to be printed
 * @f:pointer to function to be used
 * Returns:void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
