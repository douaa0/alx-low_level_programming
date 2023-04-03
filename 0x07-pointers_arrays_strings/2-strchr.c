#include "main.h"
/**
 * _strchr - function which locates a character in a string
 * @s: the string to be searched
 * @c: the character to search for
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
			return (p);
		p++;
	}
if (c == '\0')
	return (p);
return ('\0');
}
