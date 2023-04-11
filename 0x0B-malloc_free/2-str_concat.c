#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to new string concatenate s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int j, size1 = 0, size2 = 0;
	char *str;

	if (s1 != NULL)
	for (size1 = 0; s1[size1] != '\0'; size1++)
	{}
	if (s2 != NULL)
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{}
	str = malloc(sizeof(char) * (size1 + size2 + 1));
	if (str == NULL)
		return ('\0');
	for (j = 0; j < size1; j++)
	{
		str[j] = s1[j];
	}
	for (j = 0; j < size2; j++)
	{
		str[size1 + j] = s2[j];
	}
return (str);
}
