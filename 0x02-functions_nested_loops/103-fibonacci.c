#include <stdio.h>
/**
 * main-entry point
 * Return:o on success
 */
int main(void)
{
	long int first = 1, second = 2, next, even = 2, i;

	while (second <= 4000000)
	{
		next = first + second;
		if (next % 2 == 0)
		{
			even = even + next;
		}

		first = second;
		second = next;
	}
	printf("%ld\ni", even);
	return (0);
}



