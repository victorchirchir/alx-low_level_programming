#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n:number
 * @index:index
 * Return:1 on success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	temp = 1;
	temp = temp << index;
	*n = *n | temp;
	return (1);
}
