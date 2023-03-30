#include "main.h"
/**
 * *rot13-encodes string using r13
 * @s:string to be encoded
 * Return:char -encoded string
 */
char *rot13(char *s)
{
	int i = 0, j;
	char old[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char new[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == old[j])
			{
				*(s + i) = new[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
