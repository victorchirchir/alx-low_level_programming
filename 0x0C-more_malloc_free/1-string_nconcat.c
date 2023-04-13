#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat-concatenates two strings
 * @s1:first string
 * @s2:second string
 * @n:no of char from second string
 * Return:char pointer to concatinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		str[len1 + j] = s2[j];
	}
	str[len1 + j] = '\0';
	return (str);
	free(str);
}
