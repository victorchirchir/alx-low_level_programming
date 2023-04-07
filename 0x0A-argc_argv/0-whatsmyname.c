#include <stdio.h>
/**
 * main-prints name of program
 * @argc:num of arguments passed to the program
 * @argv:array of strings passed as argumetns to the program
 * Return:0 on success
 */
int main(int argc  __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
