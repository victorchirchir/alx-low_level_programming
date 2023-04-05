#include "main.h"
/**
 * _sqrt_recursion-returns natural square root of a number
 * @n:number passed
 * Return: int square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (n);
	}
	else
	{
		return (square_root(n, n / 2));
	}
}
/**
 * square_root-returns natural square root of a no
 * @n:number to be checked
 * @g:first guess
 * Return:int  square root of number
 */
int square_root(int n, int g)
{
	int ng;

	ng = (g + (n / g)) / 2;
	if (ng >= g)
	{
		return (g);
	}
	else
	{
		return (square_root(n, ng));
	}

}


