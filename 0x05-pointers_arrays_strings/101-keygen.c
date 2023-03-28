#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main-prints out a random password
 * Return-0 on success
 */
#define PASSWORD_LENGTH 10

int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int i;

	srand(time(NULL));
	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		int index;

		index = rand() % sizeof(charset);
		password[i] = charset[index];
	}
	password[PASSWORD_LENGTH] = '\0';
	printf("%s\n", password);
	return (0);
}
