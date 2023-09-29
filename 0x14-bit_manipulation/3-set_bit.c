#include "main.h"

/**
 * set_bit - sets the bit in index.
 * @n: pointer to the bit.
 * @index: the bit to set.
 *
 * Return: -1 if error, 1 if successful.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
