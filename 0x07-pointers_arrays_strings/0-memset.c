#include "main.h"
/**
 * *_memset-fills memory with a constant byte
 * @s:pointer
 * @b:byte
 * @n:no of bytes
 * Return:char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(p + i) = b;
	}
	return (s);
}

