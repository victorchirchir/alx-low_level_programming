#include "lists.h"

/**
 * delete_nodeint_at_index - deletes nodes at index
 * @head:linked list
 * @index:index to be delted
 * Return:int 1 on success, -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *temp;
	unsigned int i;

	current = *head;
	while (current != NULL)
	{
		if (i == (index - 1))
		{
			temp = current->next->next;
			free(current->next);
			current->next = temp;
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
