#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns
 * a pointer to a newly allocated
 * space in memory which contains
 * a copy of the string given as a parameter
 * @str: string to be copied
 * Return: nothing to return
 */
char *_strdup(char *str)
{
	unsigned int j, size;
	char *s;

	if (str == NULL)
		return ('\0');
	for (size = 0; str[size] != '\0'; size++)
	{}
	s = malloc(sizeof(char) * (size + 1));
	if (s == NULL)
		return ('\0');
	for (j = 0; j < size; j++)
	{
		s[j] = str[j];
	}
return (s);
}
