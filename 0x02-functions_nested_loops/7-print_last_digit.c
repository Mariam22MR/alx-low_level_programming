#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: checks the input
 *
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		ld = n - (n % 10);
	}
	else
	{
		ld = n % 10;
	}
	_putchar(ld + '0');
	return (ld);
}
