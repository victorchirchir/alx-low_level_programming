#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns number of elements in a list
 * @h:pointer to a struct of type list_t
 * Return:number of elemts in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
