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

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	calc = get_op_func(argv[2]);
	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error");
		exit(99);
	}
	if (calc == NULL)
	{
		printf("Error");
		exit(99);
	}
	printf("%d\n", calc(num1, num2));
	return (0);
}
