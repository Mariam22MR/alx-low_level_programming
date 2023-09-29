#include "main.h"

/**
 * clear_bit - clear the bit at index.
 * @n: number  to indix
 * @index: the bit to clear.
 *
 * Return: -1 on error, 1 if success.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
