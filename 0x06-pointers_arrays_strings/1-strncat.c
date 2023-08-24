#include "main.h"

/**
 *_strncat - concatenates two strings
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: the longs of the scond string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	i = 0;

	for (dest[i] != '\0'; i++)
	{}

	for (c = 0; src[j] != '\0' && c < n; c++)
	{
		dest[i + c] = src[c];
	}

	dest[i + c] = '\0';

	return (dest);
}
