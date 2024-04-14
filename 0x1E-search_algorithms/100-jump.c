#include "search_algos.h"

/**
 * jump_search - Searche value in sorted array.
 * @array: Pointer to first element of the array to search.
 * @size: Number of elements in array.
 * @value: Value being searched for.
 *
 * Return: If value is not present or array is NULL, -1.
 *
 * Description: Prints value every time it is compared in array.
 */
int jump_search(int *array, size_t size, int value)
{
	int prev = 0, step = 0, i = (int)size;

	if (array == NULL || size == 0)
		return (-1);

	while (step < i && prev < i)
	{
		if (array[step] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		prev = step;
		step += (int)sqrt(i);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, step);
	while (prev < i && prev <= step)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}

	return (-1);
}
