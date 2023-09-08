#include <stdlib.h>
#include "main.h"

/**
 * array_range - create an array of int
 * @min: start int
 * @max: max int
 * Return: array of int
 */

int *array_range(int min, int max)
{
	int len, j;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (j = 0; j < len; j++)
		ptr[j] = min++;
	return (ptr);
}
