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
	int i = 0, j = 0, sum = 0, carry = 0, k = 0, a;

	while (n1[i] != '\0')
	{
		i++;
	}
	while (n2[j] != '\0')
	{
		j++;
	}
	if (i >= size_r || j >= size_r)
	{
		return (0);
	}
	i--;
	j--;
	while (i >= 0 || j >= 0 || carry > 0)
	{
		int x = (i >= 0) ? n1[i--] - '0' : 0;
		int y = (j >= 0) ? n2[j--] - '0' : 0;

		sum = x + y + carry;
		carry = sum / 10;
		sum = sum % 10;
		r[k++] = sum + '0';
	}
	if (k >= size_r)
	{
		return (0);
	}
	r[k] = '\0';
	for (a = 0; a < k / 2; a++)
	{
		char temp = r[a];

		r[a] = r[k - a - 1];
		r[k - a - 1] = temp;
	}
	return (r);
}
