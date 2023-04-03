#include "main.h"
#include <stddef.h>
/**
 * _strchr-locates a character in a string
 * @s:string to be checked
 *@c:character to be located
 *Return:char pointer to character or NULL
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);

}
