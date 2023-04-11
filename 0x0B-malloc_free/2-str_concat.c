#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat-concatinates 2 strings
 * @s1:first string
 * @s2:second string
 * Return:pointer to concatinated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, len1 = 0, len2 = 0, len = 0;
	char *new_s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	len = len1 + len2;
	new_s = malloc((len + 1) * sizeof(char));
	if (new_s == NULL)
	{
		return (NULL);
	}
	while (i < len1)
	{
		new_s[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		new_s[i] = s2[j];
		j++;
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
	free(new_s);
}



