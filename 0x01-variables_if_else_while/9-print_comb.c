#include <stdio.h>
/**
 *Description: main-prints out 0-9 with , and space
 *Return:Always successful
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
