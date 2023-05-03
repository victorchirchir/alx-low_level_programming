#include "lists.h"

/**
 * print_listint_safe - prints out a linked list in safe mode
 * @head:linked list
 * Return:number of nodes;
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *curr = head;
	const listint_t *prev = NULL;

	while (curr != NULL)
	{
		printf("[%p] %d\n", (void *) curr, curr->n);
		count++;
		prev = curr;
		curr = curr->next;

		if (prev <= curr)
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			exit(98);
		}

	}
	return (count);
}
