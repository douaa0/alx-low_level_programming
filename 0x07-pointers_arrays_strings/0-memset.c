#include "main.h"
/**
 * _memset -function fills the first n bytes of the memory
 * pointed to by s with a constant byte b
 * @s: the pointer to starting with
 * @b: the constant byte
 * @n: the number of bytes to be filled
 * Return: a pointer to the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(p + i) = b;
	}
return (s);
}
