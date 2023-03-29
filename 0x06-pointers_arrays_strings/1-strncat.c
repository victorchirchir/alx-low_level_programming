#include "main.h"
/**
 * *_strncat-concatinates one string to the values of n of the second string
 * @dest:-first string
 * @src:-second string where are values are obtained to concatinate
 * @n:-the max bytes from src
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
		{
			break;
		}
		i++;
		j++;
	}
	return (dest);
}
