#include "main.h"
#include <stdlib.h>
/**
 * create_array-creates an array of chars initializing it with a specific char
 * @size:size of memory to be allocated
 * @c:char to initialize array
 * Return:array created
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	i = 0;
	str = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	else if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			str[i] = c;
			i++;
		}
		str[i] = '\0';
	}
	return (str);
	free(str);
}
