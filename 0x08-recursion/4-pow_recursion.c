#include "main.h"
/**
 * _pow_recursion-returns power of a number
 * @x:number to be powered
 * @y:the number x is raised to
 * Return: int x powered by y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
