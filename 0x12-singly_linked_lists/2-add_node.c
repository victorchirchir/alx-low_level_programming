#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen-calcs the len of a string
 * @s:string
 * Return:length of a string
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
/**
 * add_node-adds a new node at the beginning of a list_t
 * @head:pointer to list_t
 * @str:string to be added
 * Return: adress of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *s;
	unsigned int len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	s = strdup(str);
	if (s == NULL)
	{
		free(new_node);
		return (NULL);
	}
	len = _strlen(s);
	new_node->str = s;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
