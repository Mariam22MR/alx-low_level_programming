#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 * Return: 0
 */


void print_alphabet_x10(void)
{
	int alpha;
	char alpha1;

	for (alpha = 0; alpha < 10; alpha++)
	{
		for (alpha1 = 'a'; alpha1 <= 'z'; alpha1++)
		{
			_putchar(alpha1);
		}
	_putchar('\n');
	}
}
