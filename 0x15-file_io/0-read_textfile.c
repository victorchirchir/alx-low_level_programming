#include "main.h"

/**
 * read_textfile - reads a textfile and prints it out to the POSIX std output
 * @filename:the file to be read and printed out
 * @letters:number of letters to be printed
 * Return:number of letters that can be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t w;
	char *buff;
	ssize_t r;
	ssize_t fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(fd);
	return (w);
}

