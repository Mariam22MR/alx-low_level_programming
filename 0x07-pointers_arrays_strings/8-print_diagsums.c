#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - description
 * @a: 2d array of int types
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	 int j, sum1 = 0, sum2 = 0;

	for (j = 0; j < size; j++)
	{
		sum1 += a[(size * j) + j];
		sum2 += a[(size * (j + 1)) - (j + 1)];
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
