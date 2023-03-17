#include <stdio.h>
/**
 *Desription:main-prints out alphabet a-z in lowercase
 *Return:Always successful
*/
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
		putchar('\n');
	}
	return (0);
}
