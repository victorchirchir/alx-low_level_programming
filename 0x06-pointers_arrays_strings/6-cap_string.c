#include "main.h"
/**
 * *cap_string-capitizes word for a string passed
 *@s:string to be capitized
 *Return:char
 */
char *cap_string(char *s)
{
	int i, j;
	char sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;
	if ((*(s + i) >= 97) && (*(s + i) <= 122))
	{
		*(s + i) = (*(s + i)) - 32;
	}
	i++;
	while (*(s + i) != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (*(s + i) == sep_words[j])
			{
				if ((*(s + (i + 1)) >= 97) && (*(s + (i + 1)) <= 122))
				{
					*(s + (i + 1)) = *(s + (i + 1)) - 32;
				}
				break;
			}
		}
		i++;
	}
	return (s);
}
