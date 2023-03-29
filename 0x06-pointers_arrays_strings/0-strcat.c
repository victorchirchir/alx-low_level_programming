#include "main.h"
/**
 * *_strcat-concatenates two strings whose pointers are passed
 * @dest:-first string
 * @src:-second string
 * Return:char pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
