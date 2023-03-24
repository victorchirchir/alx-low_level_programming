#include <stdio.h>
/**
 * main-entry point
 * Return:0 on success
 */
int main(void)
{
	long int n, f, lf;

	n = 612852475143;
	f = 2;
	lf = 0;

	while (n > 1)
	{
		if (n % f == 0)
		{
			lf = f;
			n /= f;
		}
		else
		{
			f++;
		}
	}
	printf("%ld\n", lf);
	return (0);
}
