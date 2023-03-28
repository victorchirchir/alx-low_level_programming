#include "main.h"
#include <stdio.h>
/**
 * print_array-prints out values of an array
 * @a:-array to be printed
 * @n:-no of items in an array
 * Return:void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[0]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}

