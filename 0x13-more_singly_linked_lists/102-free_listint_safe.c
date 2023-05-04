#include "lists.h"

/**
 * free_listint_safe - frees lists within a loop
 * @h:linked list
 * Return:size_t size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = NULL;
	size_t count = 0;
	int sub;

	if (!h || !*h)
	{
		return (0);
	}
	do {
		sub = ((*h)->next) - (*h);
		if (sub > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
		count++;
	} while (*h);
	return (count);
}

