#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers-prints out numbers passed as argmnts
 * @separator:the char which will separate the numbers
 * @n:no of numbers passed
 * Return:void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pa;

	va_start(pa, n);
	if (separator == NULL)
	{
		return;
	}
	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(pa, int), separator);
	}
	printf("%d", va_arg(pa, int));
	printf("\n");
	va_end(pa);
}
