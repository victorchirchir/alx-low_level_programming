#include "main.h"
/**
 * *leet-encodes a string into 1337
 * @s:string to be encoded
 * Return:char -string encoded
 */
char *leet(char *s)
{
	int i = 0, j;
	char old[] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 108};
	char new[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (*(s + i) == old[j])
			{
				*(s + i) = new[j];
			}
		}
		i++;
	}
	return (s);
}
