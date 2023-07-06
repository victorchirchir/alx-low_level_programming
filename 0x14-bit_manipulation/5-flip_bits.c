#include "main.h"

/**
 * flip_bits - returns no of bits you need to completely flip
 * @n:first number
 * @m:second number
 * Return:no of bits to be flippped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int count = 0;

	xor = n ^ m;

	while (xor != 0)
	{
		if (xor & 1)
		{
			count++;
		}
		xor = xor >> 1;
	}
	return (count);
}
