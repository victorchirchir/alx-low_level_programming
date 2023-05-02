#include "lists.h"
/**
 * sum_listint - returns sum all data (n)
 * @head:linked list
 * Return:sum of all the data
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;
	int n;

	if (head == NULL)
	{
		return (0);
	}
	current = head;
	while (current != NULL)
	{
		n = current->n;
		sum = sum + n;
		current = current->next;
	}
	return (sum);
}
