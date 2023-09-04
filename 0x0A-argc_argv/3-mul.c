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
	int sum;

	if (argc == 3)
	{
		sum = itoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
