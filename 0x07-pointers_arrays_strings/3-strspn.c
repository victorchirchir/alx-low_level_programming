#include "main.h"
/**
 * int _strspn-gets the length of a prefix substring
 * @s:original string
 * @accept-prefix substring
 * Return:unsigned int - length of prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i,j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
		{
			return (i);
		}
	}
	return (i);
}
				
