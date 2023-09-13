#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the result of simple operations
 * @argc: the number of argment
 * @argv: argment vector
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int b, i;
	unsigned char op;

	int (*ptr)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < b; i++)
	{
		op = *(unsigned char *)ptr;
		printf("%.2x", op);

		if (i == b - 1)
			continue;

		printf(" ");

		ptr++;
	}
	printf("\n");

	return (0);
}
