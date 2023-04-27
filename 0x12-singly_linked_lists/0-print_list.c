#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints elements of list_t and returns no of nodes
 * @h:struct item
 * Return:number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		counter++;
	}
	return (counter);
}
