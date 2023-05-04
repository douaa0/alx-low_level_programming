#include "main.h"

/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int
 * @b: is pointing to a
 * string of 0 and 1 chars
 * Return: the converted number
 * or 0 if there is one or more chars
 * in the string b that is not 0 or 1
 * or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		i = i * 2 + (*b++ - '0');
	}
	return (i);
}
