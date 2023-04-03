#include "main.h"
/**
 * _memcpy -function copies n bytes from memory area src to memory area dest
 * @dest: the pointer to starting point
 * @src: the pointer to the memory area that will be copied
 * @n: the number of bytes that will be copied
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(p + i) = src[i];
	}
return (dest);
}
