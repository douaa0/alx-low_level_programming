#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the name of the file to create and text_content
 * is a NULL terminated string to write to the file
 * @text_content: A pointer to a string to write to the file
 * Return: 1 on success -1 on failure
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int s, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	s = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (s == -1 || w == -1)
		return (-1);

	close(s);

	return (1);
}
