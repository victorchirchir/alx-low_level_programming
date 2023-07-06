#include "main.h"

/**
 * clear_bit - sets value of a bit at a given index to 0
 * @n:number
 * @index:index
 * Return:int 1 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	temp = 1;
	temp = temp << index;
	temp = ~temp;
	*n = *n & temp;
	return (1);
}
