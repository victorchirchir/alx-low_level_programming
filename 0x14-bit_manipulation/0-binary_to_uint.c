#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b:binary numbers
 * Return:unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, i;
	unsigned int myNumber = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[len])
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (b[i] == '0')
		{
			myNumber = (myNumber << 1) + 0;
		}
		else if (b[i] == '1')
		{
			myNumber = (myNumber << 1) + 1;
		}
		else
		{
			return (0);
		}
	}
	return (myNumber);
}
