#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator-executes a function given as a par on each element
 * @array:array to be looped through
 * @size:size of an array
 * @action:the function to be executed
 * Return:void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		unsigned long int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
