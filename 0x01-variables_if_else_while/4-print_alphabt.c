#include <stdio.h>
/**
 *Description:main-prints out lowercase letters excerpt e and q
 *Return:Always successful
*/
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
