#include "main.h"

/**
 * get_endianness - checks the endiannes
 * Return: 1 or 0;
 */
int get_endianness(void)
{
	unsigned int n = 0x01;
	char *pntr = (char *) &n;

	if (*pntr == 0x01)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
