#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _strlen - calcs len of string
 * @str:string
 * Return:int len of string
 */
unsigned int _strlen(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/**
 * add_node_end - adds a new node at the end
 * @head:pointer to head
 * @str:string to be added
 * Return:list_t added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s = strdup(str);
	unsigned int len;
	list_t *current = *head;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		free(new_node);
		return (NULL);
	}

	len = _strlen(s);
	new_node->str = s;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	return (new_node);
}


