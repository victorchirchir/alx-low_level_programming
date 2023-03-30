#include "main.h"
/**
 * print_number-prints out int n
 * @n:int to be printed
 * Return:void
 */
void print_number(int n)
{
	unsigned int m, d , i;

	if (n < 0)
	{
		_putchar('-');
		m = n * -1;
	}
	else
	{
		m = n;
	}
	d = m;
	i = 1;
	while (d > 9)
	{
	       d = d /10;
		i = i * 10;
	}
	for (;i >= 1;i = i /10 )
	{
		_putchar(((m / i) % 10) + '0');
	}

}
