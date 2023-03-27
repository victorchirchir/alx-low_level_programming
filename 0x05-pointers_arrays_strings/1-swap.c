#include "main.h"
/**
 * swap_int-swaps two ints
 * @a:-first int to be swapped
 * @b:-second int to be swapped
 * Return:void
 */
void swap_int(int *a, int *b)
{
	int temp_a = *a;

	*a = *b;
	*b = temp_a;
}
