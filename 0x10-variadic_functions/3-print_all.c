#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all-prints anything or any type
 * @format:type of arg
 * Return:void
 */
void print_all(const char * const format, ...)
{
	char *s;
	va_list pa;
	int j = 0;

	va_start(pa, format);
	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(pa, int));
				break;
			case 'i':
				printf("%d", va_arg(pa, int));
				break;
			case 'f':
				printf("%f", va_arg(pa, double));
				break;
			case 's':
				s = va_arg(pa, char*);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;
		}
		if ((format[j + 1]) && (strchr("cifs", format[j])))
		{
			printf(", ");
		} j++;
	}
	printf("\n");
	va_end(pa);
}

