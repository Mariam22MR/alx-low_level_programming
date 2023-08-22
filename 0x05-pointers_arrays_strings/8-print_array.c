
#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array to be processed
 * @n: number of elements of the array to be printed
 * Return: no return it is void
 */

void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		if (s == 0)
		{
			printf("%d", a[s]);
		}
		else
			printf(", %d", a[s]);
	}
	printf("\n");
}
