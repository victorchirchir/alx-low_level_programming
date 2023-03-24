#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints out triangles using #
 * @size : int to determine size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < (size - i); j++)
			{
				_putchar(' ');
			}
			for (j--; j < size; j++)
			{
			_putchar('#');
			}
			if (i < (size - 1))
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
