#include "main.h"
/**
 * _memcpy-copies memory area
 * @dest:memory area to be copied to
 * @src:memory area to be copied from
 * @n:no of bytes copied
 * Return:char pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

