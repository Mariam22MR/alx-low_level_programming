#include "main.h"

/**
 * _sqrt_recursion - the natural square of a numbers
 * @n: number
 * @x: number
 * Return: call square function
 */

int square(int n, int x);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - to get the x
 * @n: take the value
 * @x: take the value
 * Return: result
 */

int square(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (square(n, x + 1));
	else
		return (-1);
}
