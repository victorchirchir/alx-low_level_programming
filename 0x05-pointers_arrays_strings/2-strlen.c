#include "main.h"
/**
 * _strlen-prints out the len of a string
 * @s:string to be evaluated for length
 * Return:int len of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
