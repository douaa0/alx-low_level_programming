#include <stdio.h>
/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: Always 0 which means success
 */
int main(int argc, char *argv[])
{
int a = argc - 1;
char **b = argv;
if (b != NULL)
	printf("%d\n", a);
return (0);
}
