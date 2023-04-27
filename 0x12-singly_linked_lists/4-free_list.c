#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - frees a list_t list
 *@head:the list to be freed
 *Return:void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *next = head->next;

		free(head->str);
		free(head);
		head = next;
	}
}
