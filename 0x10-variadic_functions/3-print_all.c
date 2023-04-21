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
	int j = 0, k;
	char cifs[] = "cifs";

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
					break;
				}
				printf("%s", s);
				break;
		}
		k = 0;
		while (cifs[k])
		{
			if ((format[j + 1]) && (format[j] == cifs[k]))
			{
				printf(", ");
			} k++;
		} j++;
	}
	printf("\n");
	va_end(pa);
}

