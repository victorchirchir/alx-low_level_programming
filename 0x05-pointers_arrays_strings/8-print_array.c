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

	printf("%d", a[0]);

	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	printf("\n");
}

