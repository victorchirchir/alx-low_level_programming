#include "main.h"
/**
 * puts_half-prints out the last half of a string
 * @str:-the string to be halfed
 * Return:void
 */
void puts_half(char *str)
{
	int count = 0, i, a;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			break;
		}
		count++;
	}
	if (count % 2 == 1)
	{
		a = (count - 1) / 2;
	}
	else
	{
		a = count / 2;
	}
	for (i = a; i <= count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
