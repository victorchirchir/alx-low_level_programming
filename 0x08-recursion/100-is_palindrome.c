#include "main.h"
/**
 *str_len-gets the length of s
 *@s:string passed
 *Return:int len of s
 */
int str_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + str_len(s + 1));
	}
}
/**
 * is_palindrome_aid-checks if a string is a palindrome
 * @s:string passed
 * @start:beginnning of string
 * @end:end of string
 * Return:int 1 if palindrome and o if not
 */
int is_palindrome_aid(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (is_palindrome_aid(s, start + 1, end - 1));
	}
}
/**
 *is_palindrome-checks if a string is a palindrome
 * @s:string passed
 * Return:int 1 if palindrome and o if not
 */
int is_palindrome(char *s)
{
	int len;

	len = str_len(s);
	if (len == 0)
	{
		return (1);
	}
	else
	{
		return (is_palindrome_aid(s, 0, len - 1));
	}
}
