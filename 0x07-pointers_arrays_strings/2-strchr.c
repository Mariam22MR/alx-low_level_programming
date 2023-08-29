#include "main.h"

/**
 * _strchr - fills memory with a constant byte
 * @s: pointer to put constant
 * @c: constant
 *
 * Return: pointer to s
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	for (j = 0; s[j] >= '\0' ; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}

	}
	return ('\0');
}
