#include "main.h"
/**
 * is_prime_aid-checks for prime numbers
 * @n:no to be checked
 * @i:or iteration
 *@i-no to be checked
 *Return:int 1 if prime 0 if not
 */
int is_prime_aid(int n, int i)
{
	if (n <= 2)
	{
		return (n == 2);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	else
	{
		return (is_prime_aid(n, i + 1));
	}
}
/**
 * is_prime_number-checks for prime numbers
 * @n:int number to be checked
 * Return:int 1 if prime no 0 if not
 */
int is_prime_number(int n)
{
	return (is_prime_aid(n, 2));
}

