#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range-creates an array of int and arranges them
 * @min:lowest int
 * @max:highest int
 * Return: pointer to created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, x;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(((max - min) + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0, x = min; i <= max - min; i++)
	{
		arr[i] = x;
		x++;
	}
	return (arr);
	free(arr);
}

