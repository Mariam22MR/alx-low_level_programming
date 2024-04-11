#include "search_algos.h"

/**
  * interpolation_search - Search for value in sorted array.
  * @array: pointer to first element of array to search.
  * @size: Number of elements in array.
  * @value: The value to search for.
  *
  * Return: If value is not present or array is NULL, -1.
  *         first index where value is located.
  *
  * Description: Prints value every time it is compared in array..
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (!array || size == NULL)
		return (-1);

	for (low = 0, high = size - 1; high >= low;)
	{
		i = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			high = i - 1;
		else
			low = i + 1;
	}

	return (-1);
}
