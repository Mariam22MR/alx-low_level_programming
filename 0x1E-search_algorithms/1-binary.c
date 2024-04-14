#include "search_algos.h"

/**
 * binary_search - Searches for value in sorted array
  *                 of integers using binary search.
 * @array: Pointer to first element of array to searched.
 * @size: Number elements in array.
 * @value: Value to searched for.
 *
 * Return: Indx where value located -1 if value not present or array is NULL.
 *
 * Description: Prints [sub]array being searched after each change.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	left = 0;
	right = size - 1;
	while (array && left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; ++i)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		i = (left + right) / 2;
		if (array[i] < value)
			left = i + 1;
		else if (array[i] > value)
			right = i - 1;
		else
			return (i);
	}

	return (-1);
}
