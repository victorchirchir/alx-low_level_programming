#include "lists.h"

/**
 * pop_listint - deletes head node of the linked list
 * @head :linked list
 * Return:int nodes data deleted
 */
int pop_listint(listint_t **head)
{
	int r;
	listint_t *next_node;

	if (head)
	{
		r = (*head)->n;
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
	return (r);
}



