#include <stdio.h>
#include <stdlib.h>

/**
 * main - print sum of two numbers
 * @argc: number of command line arguments
 * @argv: pointer to array of command line arguments
 * Return: if its error returns 1 otherwise 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			sum *= atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
