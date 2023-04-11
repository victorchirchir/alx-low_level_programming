#include "main.h"
#include<stdio.h>
#include <stdlib.h>
/**
 * _strdup-returns a pointer to a copy of string passed
 * @str:string passed
 * Return:pointer to copy of string passed
 */
char *_strdup(char *str)
{
	char *s;
	int len;
	int i;

	len = 0;
	i = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	s = malloc(len * sizeof(char));
	if (str == NULL || s == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < len)
		{
			s[i] = str[i];
			i++;
		}
		s[i] = '\0';
	}
	return (s);
	free(s);
}
