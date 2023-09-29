#include "main.h"

/**
 * get_endianness - get the endiannes of the system
 * 
 * Return: 1 if small endian, 0 big endian.
 */

int get_endianness(void)
{
	unsigned long int i = 1;
	char *n = (char *)&i;

	if (*n)
		return (1);
	return (0);
}
