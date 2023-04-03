#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: substrin to search for
 * Return: a pointer to the byte in s
 * that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = s, *ac = accept;
	int i, j;
	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; ac[j] != '\0'; j++)
		{
			if (p[i] == ac[j])
				return (p + i);
                        else
                                return ('\0');
		}
	}
return ('\0');
}
