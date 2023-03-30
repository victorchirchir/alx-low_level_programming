#include "main.h"
/**
 * *rot13-encodes string using r13
 * @s:string to be encoded
 * Return:char -encoded string
 */
char *rot13(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] = s[i] + 13;
		}
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
		{
			s[i] = s[i] - 13;
		}
		i++;
	}
	return (s);
}
