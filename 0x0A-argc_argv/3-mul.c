#include <stdio.h>
#include <stdlib.h>
/**
 * main-multiplies two numbers
 * @argc:number of arguments passed
 * @argv:array of strings passed to the program
 * Return:0 on success and 1 if two numbers are not passed
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int mult;

		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
