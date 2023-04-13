#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked-aloocates memory using malloc
 * @b:size allocated
 * Return:void
 */
void *malloc_checked(unsigned int b)
{
	char *str;

	str=malloc(sizeof(unsigned int) * b);
	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
