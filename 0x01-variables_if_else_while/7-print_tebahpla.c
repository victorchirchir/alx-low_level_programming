#include <stdio.h>
/**
 *Description:main-prints out alphabeautical letters in reverse
 *Return:Always successfull
*/
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
