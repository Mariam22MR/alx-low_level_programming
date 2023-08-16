#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 * @n: input
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar(48);
			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');
				z = x * y;

				if (z <= 9)
				{
					_putchar(' ');
				}
				if (z <= 99)
				{
					_putchar(' ');
				}
				if (z >= 100)
				{
					_putchar((z / 100) + 48);
					_putchar((z / 10) % 10 + 48);
				}
				else if (z <= 99 && z >= 10)
				{
					_putchar((z / 10) + 48);
				}
				_putchar((z % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
