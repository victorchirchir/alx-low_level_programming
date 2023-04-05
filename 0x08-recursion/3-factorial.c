#include "main.h"
/**
 * factorial-returns factorial of a number
 * @n:number passed
 * Return: int - factorial of no
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * (factorial(n - 1)));
	}
}
