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
	int sum;

	sum = a + b;
	return (sum);
}
/**
 * op_sub-gets difference between two numbers
 * @a:first number
 * @b:second number
 * Return:the diff of the two nums
 */
int op_sub(int a, int b)
{
	int diff;

	diff = a - b;
	return (diff);
}
/**
 * op_mul-multiplies two numbers
 * @a:first number
 * @b:second number
 * Return:the multiplication of the two nums
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}
/**
 * op_div-divides two numbers
 * @a:first number
 * @b:second number
 * Return:the division of the two nums
 */
int op_div(int a, int b)
{
	int div;

	if (b == 0)
	{
		printf("Error");
		return (100);
	}
	div = a / b;
	return (div);
}
/**
 * op_mod-two numbers
 * @a:first number
 * @b:second number
 * Return:the ramainder after division of the two nums
 */
int op_mod(int a, int b)
{
	int mod;

	if (b == 0)
	{
		printf("Error");
	}
	mod = a % b;
	return (mod);
}
