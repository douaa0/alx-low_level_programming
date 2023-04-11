#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates
 * an array of chars and
 * initializes it with a specific char
 * @size: the size of the array
 * @c : the initail char
 * Return: nothing to return
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int j;

	if (size == 0)
		return ('\0');
	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return ('\0');
	for (j = 0; j < size; j++)
	{
		ar[j] = c;
	}
return (ar);
}
