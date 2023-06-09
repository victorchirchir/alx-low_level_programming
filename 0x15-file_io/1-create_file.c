#include "main.h"
/**
 * count_string - count chars in a string
 * @str:string
 * Return:returns no of chars in a string
 */
int count_string(char *str)
{
	int len;

	for (len = 0; str[len];)
	{
		len++;
	}
	return (len);
}
/**
 * create_file - creates file
 * @filename:file to create
 * @text_content:string to write to the file
 * Return:1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, w;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = count_string(text_content);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);
	if (fd == -1 || w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}




