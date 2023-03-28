#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main-prints out a random password
 * Return:-0 on success
 */

int main(void)
{
	int c = 0, r = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		r = rand() % 128;
		if ((c + r) > 2772)
		{
			break;
		}
		c = c + r;
		printf("%c", r);
	}
	printf("%c\n", 2772 - c);
	return (0);
}
