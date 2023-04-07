#include <stdio.h>
/**
 * main-prints out the arguments passed
 * @argc:number ot argumets passed to the program
 * @argv:array of strings passed as arguments
 * Return:0 on success
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
