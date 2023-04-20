#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings-prints out strings passed
 * @separator:the char to separate the strings
 * @n:number of strings passed
 * Return:void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pa;
	char *str;

	va_start(pa, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(pa, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(pa);
	printf("\n");
}
