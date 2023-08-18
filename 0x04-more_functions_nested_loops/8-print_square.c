#include "main.h"

/**
 * print_square - to print a square
 *
 * @size: size of square
 */

void print_square(int size)
{
	int r, c;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (r = 0; r < size; r++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
