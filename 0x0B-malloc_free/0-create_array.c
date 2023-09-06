#include "main.h"
#include <stdlib.h>

/**
 * create_array - return array of char
 * @a: char to initialized
 * @size: size of the array
 * Return: pointer to the array initialized or NULL
 */

char *create_array(char a, unsigned int size)
{
	char *n;

	n = malloc(size * sizeof(char));
	if (size == 0 || !n)
		return ('\0');

	while (size--)
		n[size] = a;
	return (n);
}
