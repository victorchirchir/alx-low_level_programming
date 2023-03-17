#include <stdio.h>
/**
 *Description:main-prints out numbers zero to nine
 *Return:Always succcessful
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
