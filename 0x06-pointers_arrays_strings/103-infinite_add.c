#include "main.h"
/**
 * *infinite_add-adds two numbers of type char
 * @n1:first number
 * @n2:second number
 * @r:buffer to store the result
 * @size_r:buffer size
 * Return:char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, sum, carry, k = 0, i, j;

	while (n1[len1] != '\0')
	{
		len1++;
	}
	while (n2[len2] != '\0')
	{
		len2++;
	}
	if ((len1 + len2) > size_r)
	{
		return (0);
	}
	i = len1 - 1;
	j = len2 - 1;
	while (i >= 0 || j >= 0 || carry)
	{
		int x = (i >= 0) ? n1[i--] - '0' : 0;
		int y = (j >= 0) ? n2[j--] - '0' : 0;

		sum = x + y + carry;
		carry = sum / 10;
		r[k++] = (sum % 10) + '0';
	}
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}
	r[k] = '\0';
	return (r);
}
