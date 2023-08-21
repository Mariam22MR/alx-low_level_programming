#include "main.h"

/**
 * swap_int - swaps the values to integers
 * @a: first integer to swap
 * @b: will be swaped with a
 * Return: no return it is void
 */

void swap_int(int *a, int *b)
{
	int swap = *b;

	*b = *a;

	*a = swap;
}
