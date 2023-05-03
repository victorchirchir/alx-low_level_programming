#include "lists.h"

/**
 * print_listint_safe - prints out a linked list in safe mode
 * @head:linked list
 * Return:number of nodes;
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listint_t *curr = NULL;
	listint_t *prev = NULL;
	listint_t *head_cpy = NULL;

	head_cpy = (listint_t *)head;
	curr = head_cpy;
	while (curr != NULL)
	{
		printf("[%p] %d\n", (void *) curr, curr->n);
		prev = curr;
		curr = curr->next;
		count++;

		if (prev <= curr)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			exit(98);
		}

	}
	return (count);
}
