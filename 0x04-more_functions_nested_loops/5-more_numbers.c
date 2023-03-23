#include "main.h"
/**
 * more_numbers - prints numbers from 0 -14
 * Return:void
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + 48);
			}
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
		i++;
	}
}

