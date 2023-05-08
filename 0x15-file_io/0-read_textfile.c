#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: text file being read
 * @letters: the number of letters
 * it should read and print
 * Return: the actual number of
 * letters it could read and print
 * if the file can not be opened or read return 0
 * if filename is NULL return 0
 * if write fails or does not write
 * the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t s;
	ssize_t w;
	ssize_t t;

	s = open(filename, O_RDONLY);
	if (s == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(s, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(s);
	return (w);
}
