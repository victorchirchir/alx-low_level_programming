#include "main.h"

/**
 * get_bit - returns value of a bit in a given index
 * @n:number
 * @index:index of bit
 * Return:value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	temp = 1;
	temp = temp << index;
	if ((temp & n) == temp)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
