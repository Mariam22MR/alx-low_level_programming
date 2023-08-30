#include "main.h"

/**
 * _pow_recursion - Function that returns the value of x of y.
 * @x: type integer variable
 * @y: type integer variable
 * Return: y lower than 0 function -1.
 */
int _pow_recursion(int x, int y)
{
		if (y < 0)
			return (-1);

		else if (y == 0)
			return (1);

		return (x * _pow_recursion(x, y - 1));
}
