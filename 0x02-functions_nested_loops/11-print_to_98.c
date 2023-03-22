#include "main.h"
#include <stdio.h>
/**
 * print_to_98:-prints out all natural numbers to 98 from number declared
 * @n:-number passed to function
 * Return:Void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		int i;

		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else if (n > 98)
	{
		int i;

		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("%d\n", 98);
}

