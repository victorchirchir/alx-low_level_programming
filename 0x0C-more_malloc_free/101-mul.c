#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * is_number-Testes whether the arg provided is a num
 * @s:string passed
 * Return:0 if true, 1 if False
 */
int is_number(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' || s[i] <= '9')
		{
			return (1);
		}
	}
	return (0);
}
/**
 * string_to_int - changes a string to int
 * @s:string passed
 * Return:int
 */
int string_to_int(char *s)
{
	int i;
	int r = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		r = r * 10 + s[i] - 48;
	}
	return (r);
}
/**
 * print_number-prints out a number
 * @number:to be printed
 * Return:void
 */
void print_number(int number)
{
	int count = 0;
	int i;
	int tmp;
	char *s;

	if (number == 0)
	{
		_putchar('0');
	}
	tmp = number;
	while (tmp > 0)
	{
		count++;
		tmp = tmp / 10;
	}
	s = malloc(sizeof(char) * count);

	for (i = count - 1; i >= 0; i--)
	{
		s[i] = number % 10 + '0';
		number = number / 10;
	}
	for (i = 0; i < count; i++)
	{
		_putchar(s[i]);
	}
}
/**
 * print_string-prints out a string
 * @s-string to be printed
 * Return:void
 */
void print_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
/**
 * main - multiplies two positive numbers
 * @argc:no of arguments
 * @argv:list of strings passed
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *s = "Error";

	if (argc != 3)
	{
		print_string(s);
		return (98);
	}
	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		print_string(s);
		return (98);
	}
	num1 = string_to_int(argv[1]);
	num2 = string_to_int(argv[2]);
	result = num1 * num2;
	print_number(result);
	_putchar('\n');
	return (0);
}





