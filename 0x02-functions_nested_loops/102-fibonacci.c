#include <stdio.h>
/**
 *print_50_Fibonacci_numbers:- prints 50 Fibonacci numbers
 *Return: void
 */
void print_50_Fibonacci_numbers(void)
{
	long int first = 1, second = 2, next, i;

	printf("%ld, %ld", first, second);
	for (i = 0; i < 48; i++)
	{
		next = first + second;
		printf(", %ld", next);
		first = second;
		second = next;
	}
	printf("\n");
}
/**
 * main-entry point
 * Return:0 on success
 */
int main(void)
{
	print_50_Fibonacci_numbers();
	return (0);
}
