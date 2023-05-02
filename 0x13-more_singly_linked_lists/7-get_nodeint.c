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
	listint_t *curr_node;
	unsigned int i;

	if (head)
	{
		current = head;
		if (index == 0)
		{
			return (head);
		}

		for (i = 0; i < index; i++)
		{
			current = current->next;
		}
		curr_node = current;
		if (curr_node == NULL)
		{
			return (NULL);
		}
	}
	return (curr_node);
}


