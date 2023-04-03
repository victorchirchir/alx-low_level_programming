#include "main.h"
#include <stddef.h>
/**
 * _strstr-locates a substring
 * @haystack:string to be searched
 * @needle:substring to be located
 * Return:char-pointer to the beginning of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1;
	char *p2;
	char *start;

	if (!*needle)
	{
		return (haystack);
	}
	while (*haystack)
	{
		start = haystack;
		p1 = haystack;
		p2 = needle;
		while (*p1 && *p2 && (*p1 == *p2))
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return (start);
		}
		haystack++;
	}
	return (NULL);
}
