#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *Description:main-prints out the last digit and if its greater than five
 *Return: Always successful
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		int l = n % 10;

		if (l > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, l);
		}
		else if (l == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, l);
		}
		else if (l < 6 && l != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
		}
		return (0);
}
