#include "lists.h"

/**
 * free_listint2-frees a list
 * @head:linked list
 * Return:void
 */
void free_listint2(listint_t **head)
{
	listint_t *curr = *head;

	while (curr != NULL)
	{
		listint_t *temp = curr;

		curr = curr->next;
		free(temp);
	}
	*head = NULL;
}
