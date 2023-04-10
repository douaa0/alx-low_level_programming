#include <stdio.h>
/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: Always 0 which means success
 */
int main(int argc, char *argv[])
{
int i,  a = argc;
char **b = argv;
if (b != NULL)
	for (i = 0; i < a; i++)
	{
		printf("%s\n", b[i]);
	}
return (0);
}
