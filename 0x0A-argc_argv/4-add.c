#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the program command line arguments
 * Return: Always 0 which means success
 */
int main(int argc, char *argv[])
{
	int j, num, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (j = 1; j < argc; j++)
	{
		for (num = 0; argv[j][num] != '\0'; num++)
		{
			if (argv[j][num] < '0' || argv[j][num] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[j]);
	}
	printf("%d\n", sum);
return (0);
}
