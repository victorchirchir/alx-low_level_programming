#include "lists.h"

/**
 * find_listint_loop - finds a loop in a linked list
 * @head:linked list
 * Return:adress of node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *f = head, *s = head;

	while (f != NULL && f->next != NULL)
	{
		s = s->next;
		f = f->next->next;
		if (s == f)
		{
			s = head;
			while (s != f)
			{
				s = s->next;
				f = f->next;
			}
			return (s);
		}
	}
	return (NULL);
}
