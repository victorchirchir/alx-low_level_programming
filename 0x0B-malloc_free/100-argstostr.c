#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *argstostr-concatenates all the argumets of a program
 *@ac:number of arguments
 *@av:array of strings passed
 *Return:pointer to concatinated string
 */
char *argstostr(int ac, char **av)
{
	char *new_string;
	int i, j, len = 0, total_len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; av[i] != NULL; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		total_len += len + 1;
		len = 0;
	}
	new_string = malloc(total_len * sizeof(char *));

	if (new_string == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; av[i] != NULL; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*(new_string + len + j) = av[i][j];
		}
		*(new_string + len + j) = '\n';
		len += j + 1;
	}
	*(new_string + len) = '\0';
	return (new_string);
	free(new_string);
}

