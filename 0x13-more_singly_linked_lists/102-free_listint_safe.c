#include "lists.h"

/**
 * free_listint_safe - frees lists within a loop
 * @h:linked list
 * Return:size_t size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp = NULL;
	listint_t *next = NULL;
	size_t count = 0;

	if (!h || !*h)
	{
		return (0);
	}
	while (*h != NULL)
	{

		next = (*h)->next;
		if ((*h) <= next)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}
	return (count);
}

