#include "search_algos.h"

/**
  * _binary_search - Searches value in sorted array of int using binary search.
  * @array: pointer to first element of array to search.
  * @left: starting index of [sub]array to search.
  * @right:  Ending index of [sub]array to search.
  * @value: Value to search for.
  *
  * Return: If value is not present or array is NULL, -1.
  *         Otherwise, index where value is located.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (!array)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - Searches value in sorted of int using expone search.
  * @array: Pointer to first element of array to search.
  * @size: Number of elements in array.
  * @value: value to search for.
  *
  * Return: If value is not present or array is NULL, -1.
  *         Otherwise, index where value is located.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (!array)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
