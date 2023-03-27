#include "main.h"
/**
 * puts2-prints out every character of a spring
 * @str:-string to be printed out
 * Return:void
 */
void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			break;
		}
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
	_putchar('\n');
}
