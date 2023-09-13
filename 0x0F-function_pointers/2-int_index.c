#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: the integers array
 * @size: the array size
 * @cmp: the compare function
 *
 * Return: the integers index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
