#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of string given as a parameter.
 * @str: pointer char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *m;
	int i, size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size++;
	}
	m = (char *) malloc(sizeof(*str) + 1 * size);

	if (m == 0)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		m[i] = str[i];
	}
	return (m);
}
