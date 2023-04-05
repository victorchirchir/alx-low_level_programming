#include "main.h"
/**
 * _puts_recursion-prints out a string using recursion
 * @s:string to be printed
 * Return:void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
