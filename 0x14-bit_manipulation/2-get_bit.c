#include "main.h"

/**
 * get_bit - get the bit in index.
 * @n: the number.
 * @index: the bit to get.
 *
 * Return: value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
