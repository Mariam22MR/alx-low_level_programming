#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: number of command line arguments
 * @argv: pointer to array of command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
