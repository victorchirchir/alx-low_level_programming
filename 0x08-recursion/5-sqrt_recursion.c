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
	if (n == 1 || n == 0)
	{
		return (n);
	}
	else
	{
		return (square_root(n, 1, n));
	}
}
/**
 * square_root-returns natural square root of a no
 * @n:number to be checked
 * @l:lower range
 * @h:higher range
 * Return:int  square root of number
 */
int square_root(int n, int l, int h)
{
	int m, sq;

	if (l > h)
	{
		return (-1);
	}
	m = (l + h) / 2;
	sq = m * m;
	if (sq == n)
	{
		return (m);
	}
	else if (sq > n)
	{
		return (square_root(n, l, m - 1));
	}
	else
	{
		return (square_root(n, m + 1, h));
	}
}


