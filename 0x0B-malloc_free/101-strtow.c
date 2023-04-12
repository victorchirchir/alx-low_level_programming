#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * count_words-helper func to count words in a string
 * @s:string passed
 * Return:int - no of words in string
 */
int count_words(char *s)
{
	int flag, i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\0')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			flag = 1;
			count++;
		}
	}
	return (count);
}

/**
 *strtow-splits a string into words
 *@str:string to be split
 *Return:char pointer to split string
 */
char **strtow(char *str)
{
	int i, len = 0, k = 0, x = 0, count, s, e;
	char **words, *word;

	while (str[len] != '\0')
	{
		len++;
	}
	count = count_words(str);
	if (count == 0)
		return (NULL);
	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (x)
			{
				e = i;
				word = malloc(sizeof(char) * (x + 1));
				if (word == NULL)
					return (NULL);
				while (s < e)
				{
					*word++ = str[s++];
				}
				*word = '\0';
				words[k] = word - x;
				k++;
				x = 0;
			}
		}
		else if (x++ == 0)
		{
			s = i;
		}
	}
		words[k] = NULL;
		return (words);
}


