#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to put the constant
 * @b: char to copy
 * @n: max bytes to use
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++,)
	{
		s[j] = b;
	}

	return (s);
}
