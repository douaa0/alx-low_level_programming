#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: substrin to search for
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p = s, *ac = accept;
	unsigned int counter = 0;

	while (*ac != '\0')
	{
		p = s;
		while (*p != '\0' && *p != ' ')
		{
			if (*p == *ac)
			{
				counter++;
			}
			p++;
		}
		ac++;
	}
return (counter);
}
