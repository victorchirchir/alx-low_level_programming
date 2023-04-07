#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main-adds positive numbers and prints out sum
 * @argc:number of arguments passed
 * @argv:array of strings passed to the program
 * Return:0 on succes and 1 if args contain symobls
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i, j;
		int sum = 0;

		for (i = 1; i < argc; i++)
		{
			char *temp = argv[i];

			for (j = 0; temp[j] != '\0'; j++)
			{
				if (!isdigit(temp[j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
