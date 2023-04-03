#include "main.h"
#include <stddef.h>
/**
 * _strpbrk-searches a string for any set of bytes
 * @s:string with the charcters to be searched
 * @accept:string where characters from s will be searched
 * Return:char pointer to first occurence of the character
 */
char *_strpbrk(char *s, char *accept)
{
	char *p1 = s;
	char *p2;

	while (*p1 != '\0')
	{
		p2 = accept;
		while (*p2 != '\0')
		{
			if (*p1 == *p2)
			{
				return (p1);
			}
			p2++;
		}
		p1++;
	}
	return (NULL);
}
