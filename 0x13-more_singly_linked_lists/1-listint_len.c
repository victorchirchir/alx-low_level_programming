#include "lists.h"
/**
 * listint_len-returns no of elements
 * @h:linked list
 * Return:number of elements
 */
size_t listint_len(const listint_t *h)
{
	listint_t *current;
	size_t count = 0;
	listint_t *h_copy = (listint_t *)h;

	current = h_copy;
	if (h)
	{
		while (current != NULL)
		{
			count++;
			current = current->next;
		}
	}
	return (count);
}
