#include "main.h"
/**
 * times_table-print out the times table
 * Return:void
 */
void times_table(void)
{
	int a, b, result;

		for (a = 0; a <= 9; a++)
		{
			_putchar(48);
			for (b = 1; b <= 9; b++)
			{
				_putchar(44);
				_putchar(32);
				result = a * b;
				if (result < 10)
				{
					_putchar(32);
					_putchar(result + 48);

				}
				else
				{
					_putchar((result / 10) + 48);
					_putchar((result % 10) + 48);
				}
			}
			_putchar('\n');
		}
}
