#include "main.h"

/**
 * append_text_to_file - appends text to end of a file
 * @filename:name of the file to be appended
 * @text_content:string to be added
 * Return: 1 on success and -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int w, a, len;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}
	a = open(filename, O_WRONLY | O_APPEND);
	w = write(a, text_content, len);
	if (a == -1 || w == -1)
	{
		return (-1);
	}
	close(a);
	return (1);
}



