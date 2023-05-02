#include "lists.h"

/**
 * get_nodeint_at_index - returns node of an index passed
 * @head:linked list passed
 * @index:ndex of the node to be retrieved
 * Return:node of the index passed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i = 0;

	if (head)
	{
		current = head;
		while (current != NULL)
		{
			if (i == index)
			{
				return (current);
			}
			current = current->next;
			i++;
		}
	}
		return (NULL);
}


