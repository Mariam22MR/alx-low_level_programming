#include "main.h"

/**
 * *_memset - copies memory area
 * @s: memory area
 * @b: char to copy
 * @n: length of b to be copies
 * Return: pointer to s
 */
char *_memcpy(char *s, char *b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b[j];
	}

	return (s);
}
