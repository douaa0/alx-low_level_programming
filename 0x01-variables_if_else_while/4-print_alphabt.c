#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
	if (c != 'q' && c != 'e')
	{
		putchar(c);
		c++;
	}
	else
	{
		c++;
	}
}
putchar('\n');
return (0);
}

