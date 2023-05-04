#include "main.h"

/**
 * print_binary - prints binary rep of a number
 * @n:number
 * Return:void
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp = 1;
	int flag = 0;

	temp <<= (sizeof(unsigned long int) * 8) - 1;

	while (temp > 0)
	{
		if ((n & temp) == temp)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag)
		{
			_putchar('0');
		}
		temp = temp >> 1;
	}
	if (!flag)
	{
		_putchar('0');
	}
}
