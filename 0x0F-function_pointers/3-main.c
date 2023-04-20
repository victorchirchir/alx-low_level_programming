#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main-performs simple operations
 * @argc:no of arguments passed
 * @argv:array of strings passed
 * Return:o on success
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	calc = get_op_func(argv[2]);
	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%d\n", calc(num1, num2));
	return (0);
}
