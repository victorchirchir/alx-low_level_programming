#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc-reallocates a memory block using malloc
 * @ptr:pointer to the memory already allocated
 * @old_size:the old size allocated to memory
 * @new_size:new size of the memory being allocated
 * Return:void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int size, i;
	char *src, *dest;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (ptr != NULL)
	{
		size = old_size < new_size ? old_size : new_size;
		for (i = 0; i < size; i++)
		{
			src = ptr;
			dest = new_ptr;
			dest[i] = src[i];
		}
	}
	return (new_ptr);
	free(ptr);
}
