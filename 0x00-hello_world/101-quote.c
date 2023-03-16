#include <unistd.h>
/**
 * Description: main- prints out a string standard error stream
 * Return: returns 0 if successful
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 56);
	return (0);
}
