#include "main.h"
/**
 * print_times_table:-prints out times table for n
 * @n:-number passed for it's times table to be passed
 * Return:void
 */
void print_times_table(int n)
{
	if (n <= 15 || n >= 0)
	{
		int a, b, result;

		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				_putchar(44);
				_putchar(32);
				result = a * b;
				if (result < 10)
				{
					_putchar(32);
					_putchar(32);
					_putchar(result + 48);
				}
				else if (result < 100)
				{
					_putchar(32);
					_putchar((result / 10) + 48);
					_putchar((result % 10) + 48);
				}
				else
				{
					_putchar(((result / 100) % 10) + 48);
					_putchar(((result / 10) % 10) + 48);
					_putchar((result % 10) + 48);
				}
			}
		_putchar('\n');
		}
	}
}
