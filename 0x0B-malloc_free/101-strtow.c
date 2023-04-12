#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 *strtow-splits a string into words
 *@str:string to be split
 *Return:char pointer to split string
 */
char **strtow(char *str)
{
	int i, j, k, x, count = 0;
	char **words;

	if (str == NULL || str == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (isspace(str[i]) && !isspace(str[i - 1]))
		{
			count++;
		}
	}
	count++;
	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isspace(str[i]))
		{
			k = i;
			while (!isspace(str[k]) && str[k] != '\0')
			{
				k++;
			}
			words[j] = malloc(sizeof(char) * (k - i + 1));
			if (words[j] == NULL)
			{
				return (NULL);
			}
			for (x = 0; x < k - i; x++)
			{
				words[j][x] = str[i + x];
			}
			words[j][k - i] = '\0';
			j++;
			i = k;
		}
	}
	words[j] = NULL;
	return (words);
	free(words);
}


