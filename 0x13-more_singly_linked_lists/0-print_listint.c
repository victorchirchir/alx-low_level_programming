#include "lists.h"
/**
 * print_listint-prints all elements of a list
 * @h:linked list
 * Return:number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	listint_t *h_copy = (listint_t *)h;
	listint_t *current = h_copy;

	if (h)
	{
		while (current != NULL)
		{
			printf("%d\n", current->n);
			current = current->next;
			count++;

		}
	}
	return (count);
}
