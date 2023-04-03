#include "main.h"
/**
 * _strstr - function which locates a substring
 * @haystack: the string to be searched
 * @needle: substrin to search for
 * Return: a pointer to the beginning of the located substring
 *  or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *s, *p1, *p2;

	while (*haystack)
	{
		s = haystack;
		p1 = s;
		p2 = needle;
		while (*p1 && *p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (!*p2)
			return (s);
		haystack++;
	}
	return ('\0');
}
