#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints out numbers frim 0-9
 * Return:void
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
