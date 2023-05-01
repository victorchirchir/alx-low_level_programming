#include "lists.h"

/**
 * pop_listint - deletes head node of the linked list
 * @head :linked list
 * Return:int nodes data deleted
 */
int pop_listint(listint_t **head)
{
	int r = -1;
	listint_t *next_node;

	if (head == NULL)
	{
		return (-1);
	}
	if (head)
	{
		r = (*head)->n;
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
	return (r);
}



