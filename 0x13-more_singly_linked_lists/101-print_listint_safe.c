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
	size_t checker;

	while (curr != NULL)
	{
		printf("[%p] %d\n", (void *) curr, curr->n);

		count++;
		curr = curr->next;
		checker = 0;
		prev = head;
		if (!head)
		{
			exit(98);
		}

		while (checker < count)
		{
			if (prev == curr)
			{
				printf("-> [%p] %d\n", (void *)curr, curr->n);
				return (count);
			}
			prev = prev->next;
			checker++;
		}

	}
	return (count);
}
