#include "main.h"
/**
 * print_diagonal - print diagonal using /
 * @n: -number of / to be added
 * Return:void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j;
		int a;

		for (j = 0; j < n; j++)
		{
			for (a = 0; a < j; a++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
