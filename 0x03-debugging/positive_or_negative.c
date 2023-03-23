#include <stdlib.h>
#include <stdio.h>
/**
 * Description:positive_or_negative- prints out if number is pos, neg or zero
 * @i:-no to be tested
 * Return:void
 */
void positive_or_negative(int i)
{
		if (i < 0)
		{
		printf("%d is negative\n", i);
		}
		else if (i == 0)
		{
		printf("%d is zero\n", i);
		}
		else if (i > 0)
		{
		printf("%d is positive\n", i);
		}
}

