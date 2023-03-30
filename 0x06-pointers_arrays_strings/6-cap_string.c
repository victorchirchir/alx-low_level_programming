#include "main.h"
/**
 * *cap_string-capitizes word for a string passed
 *@s:string to be capitized
 *Return:char
 */
char *cap_string(char *s)
{
	int i;

	while (s[i])
	{
		if (i == 0 || s[i - 1] == ' ' || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == ',' || s[i - 1] == ',' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1] == '\n' || s[i - 1] == '	')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - ('a' - 'A');
			}
		}
		else
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] = s[i] + ('a' - 'A');
			}
		}
		i++;
	}
	return (s);
}
