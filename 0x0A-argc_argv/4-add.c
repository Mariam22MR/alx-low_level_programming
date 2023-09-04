#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - its all starts here
 * @argc: number of arguments
 * @argv: array of pointer to arguments
 * Return: if its error returns 1 otherwise 0
 */

int main(int argc, char *argv[])
{
	int s = 0;
	char *i;

	while (--argc)
	{
		i = argv[argc];
		while (*i)
		{
			if (*i < '0' || *i > '9')
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		s += atoi(argv[argc]);
	}
	printf("%d\n", s);
	return (0);
}
