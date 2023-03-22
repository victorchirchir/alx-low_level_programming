#include <stdio.h>
/**
 *print_50_Fibonacci_numbers:- prints 50 Fibonacci numbers
 *Return: void
 */
void print_50_Fibonacci_numbers(void)
{
	int first = 1, second = 2, next, i;

	printf("%d, %d", first, second);
	for (i = 0; i < 48; i++)
	{
		next = first + second;
		printf(", %d", next);
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
