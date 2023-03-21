#include "main.h"
/**
 * print_last_digit:-prints the last digit of a number
 * @num:number to passed so as to obtain last digit
 * Return: Value of last digit
 */
int print_last_digit(int num)
{
	int last;

	last = num % 10;
	if (last < 0)
	{
		_putchar(-last + 48);
		return (-last);
	}
	else
	{
		_putchar(last + 48);
		return (last);
	}

}
