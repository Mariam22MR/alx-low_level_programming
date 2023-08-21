#include "main.h"

/**
 * print_rev - print revresed string, followed by a new line
 * @s: pointer to string to print
 * Return: no return it is void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
