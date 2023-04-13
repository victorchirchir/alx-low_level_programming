#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc-allocates memory using malloc
 * @nmemb:number of elements
 * @size:size of the type of element
 * Return:void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	str = malloc(size * nmemb);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		str[i] = 0;
	}
	return (str);
	free(str);
}

