#include <stdio.h>
#include <stdlib.h>
/**
 * main-gives number of conis returned
 * @argc:no of parameters passed to the program
 * @argv:array of string passed to the program
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num_coins, cents;

		cents = atoi(argv[1]);
		num_coins = 0;

		if (cents < 0)
		{
			printf("%d\n", 0);
		}
		else
		{
			num_coins += cents / 25;
			cents %= 25;

			num_coins += cents / 10;
			cents %= 10;

			num_coins += cents / 5;
			cents %= 5;

			num_coins += cents / 2;
			cents %= 2;

			num_coins += cents;

			printf("%d\n", num_coins);
		}
	}
	return (0);
}
