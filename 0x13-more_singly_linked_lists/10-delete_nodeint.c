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
	listint_t *temp = NULL;
	unsigned int i = 0;
	listint_t *next_node = NULL;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		if (*head == NULL)
		{
			return (-1);
		}
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
		return (1);
	}

	current = *head;
	for (i = 0; i < (index - 1); i++)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
	}
	if (current->next == NULL)
	{
		return (-1);
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);

}
