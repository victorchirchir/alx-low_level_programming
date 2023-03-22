#include <stdio.h>
#include "main.h"
/**
 *print_multiples_of_3_or_5 :-sums up multiples of 3 and 5 from 0 to 1024
 *Return:void
 */
void print_multiples_of_3_or_5(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n");
}
