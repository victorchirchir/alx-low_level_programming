#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head:linked list
 * @idx:index
 * @n:number to be added
 * Return:adress of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current;
	listint_t *temp;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		new_node->n = n;
		*head = new_node;
	}
	current = *head;
	while (current != NULL)
	{
		if (i == (idx - 1))
		{
			temp = current->next;
			current->next = new_node;
			new_node->n = n;
			new_node->next = temp;
			return (new_node);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}


