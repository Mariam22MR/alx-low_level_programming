#include "main.h"

/**
 * print_most_numbers - print the numbers form 0 to 9,
 * except 2 and 4, followed by a new line
 */

void print_most_numbers(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + '0');
		}
		num++;
	}
	_putchar('\n');
}
