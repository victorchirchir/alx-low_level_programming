#include <stdio.h>
/**
 *Description: main-prints alphabetic letters in uppercase and lowercase
 *Return:Always successful
*/
int main(void)
{
	int i;
	int j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
