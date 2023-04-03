#include "main.h"
#include <stdio.h>
/**
 * print_buffer-prints out a buffer
 * @b:buffer
 * @size:size of the buffer
 * Return:void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i+= 10)
	{
		printf("%08x: ", i);
		for (j = 1; j < i + 10; j++)
		{
			if (j < size)
			{
				printf("%02x",b[j]);
			}
			else
			{
				printf("   ");
			}
			printf(" ");
			for (j = 1; j < i + 10; j++)
			{
				if (j < size)
				{
					char c = b[j];
					
					if (c >= 32 && c <= 126)
					{
						printf("%c", c);
					}
					else
					{
						printf(".");
					}
				}
			}
			printf("\n");
		}
	}
}	
