#include <stdio.h>
#include <stdlib.h>
/**
 * main-prints name of program
 * @argc:num of arguments passed to the program
 * @argv:array of strings passed as argumetns to the program
 * Return:0 on success
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
