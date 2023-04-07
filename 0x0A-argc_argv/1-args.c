#include <stdio.h>
/**
 * main-prints out no of arguments passed out to a program
 * @argc:no of arguments passed to the program
 * @argv:array of strings passed to the program
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
