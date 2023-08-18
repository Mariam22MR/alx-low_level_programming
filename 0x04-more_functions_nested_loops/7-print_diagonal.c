#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: to check the number
 *Return: no return it is void
 */

void print_diagonal(int n)
{
	int d, b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (d = 0; d < n; d++)
		{
			for (b = 0; b < n; b++)
			{
				if (d == b)
				{
					_putchar('\\');
				}
				else if (b < d)
					_putchar(' ');
			}
		_putchar('\n');
		}
	}
}
