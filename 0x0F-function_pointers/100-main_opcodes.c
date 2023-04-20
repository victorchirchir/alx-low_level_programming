#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints out opcodes
 * @argc:number of arguments
 * @argv:array of strings passed
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *ptr = (char *)main;
	int i, num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);
	if (num <= 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < (num - 1); i++)
	{
		printf("%02x ", ptr[i] & 0xFF);
	}
	printf("%02x", ptr[num - 1] & 0xFF);
	printf("\n");
	return (0);
}
