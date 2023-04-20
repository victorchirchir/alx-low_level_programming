#include "3-calc.h"
#include <stdio.h>
/**
 * op_add-sums two numbers
 * @a:first number
 * @b:second number
 * Return:the sum of the two nums
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub-gets difference between two numbers
 * @a:first number
 * @b:second number
 * Return:the diff of the two nums
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul-multiplies two numbers
 * @a:first number
 * @b:second number
 * Return:the multiplication of the two nums
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div-divides two numbers
 * @a:first number
 * @b:second number
 * Return:the division of the two nums
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a / b);
}
/**
 * op_mod-two numbers
 * @a:first number
 * @b:second number
 * Return:the ramainder after division of the two nums
 */
int op_mod(int a, int b)
{

	if (b == 0)
	{
		printf("Error\n");
		return (100);
	}
	return (a % b);
}
