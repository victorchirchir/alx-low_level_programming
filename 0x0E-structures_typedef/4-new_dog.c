#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * count_string-counts no of chars in a string
 * @s:string passed
 * Return:int count
 */
int count_string(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
/**
 * new_dog-creates a new dog
 * @name:name of dog
 * @age:age of the dog
 * @owner:who owns the dog
 * Return:dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *newName, *newOwner;
	int len1, len2, i, j;
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}
	len1 = count_string(name);
	len2 = count_string(owner);
	newName = malloc(sizeof(char) * len1 + 1);
	if (newName == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		newName[i] = name[i];
	}
	newName[i] = '\0';
	newOwner = malloc(sizeof(char) * len2 + 1);
	if (newOwner == NULL)
	{
		free(newDog);
		free(newName);
		return (NULL);
	}
	for (j = 0; j < len2; j++)
	{
		newOwner[j] = owner[j];
	}
	newOwner[j] = '\0';
	newDog->name = newName;
	newDog->age = age;
	newDog->owner = newOwner;
	return (newDog);
}


