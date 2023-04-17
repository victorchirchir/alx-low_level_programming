#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a variable of struc dog whith a no of vars
 * @d:pointer to dog
 * @name:name of the dog
 * @age:The age of the dog
 * @owner:who owns the dog
 * Return:void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
