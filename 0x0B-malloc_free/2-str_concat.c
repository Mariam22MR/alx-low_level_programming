#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: null or the concat string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2, i, j;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = 0;
	size2 = 0;
	i = 0;
	j = 0;

	while (*(s1 + size1))
		size1++;
	while (*(s2 + size2))
		size2++;

	m = malloc((size1 + size2) + 1);

	if (m == NULL)
	{
		return (NULL);
	}

	while (i < size1)
	{
		*(m + i) = *(s1 + i);
		i++;
	}

	while (j <= size2)
	{
		*(m + j + size1) = *(s2 + j);
		j++;
	}

	return (m);
}
