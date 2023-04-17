#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog-prints out struct dog
 * @d:pointer to the struct dog
 * Return:void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(0);
	}
	if ((*d).name == NULL)
	{
		(*d).name = "(nil)";
	}
	if ((*d).owner == NULL)
	{
		(*d).owner = "(nil)";
	}
	printf("Name: %s\n",(*d).name);
	printf("Age: %f\n",(*d).age);
	printf("Owner: %s\n",(*d).owner);
}

