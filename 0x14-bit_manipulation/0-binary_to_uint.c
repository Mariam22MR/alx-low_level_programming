#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: binary number as string
 *
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')

			return (0);

		i = i * 2 + (*b++ - '0');
	}

	return (i);
}
