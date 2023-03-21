#include "main.h"
/**
 * _islower- confirms if a character is lowercase
 * @c:-character to be tested
 * Return: 1 else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
