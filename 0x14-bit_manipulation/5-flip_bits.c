#include "main.h"

/**
 * flip_bits - count the bit to change to another value.
 * @n: firstnumber.
 * @m: second number.
 *
 * Return: number of different bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int i = 0;

	while (xorval != 0)
	{
		i++;
		xorval = xorval >> 1;
	}
	return (i);
}
