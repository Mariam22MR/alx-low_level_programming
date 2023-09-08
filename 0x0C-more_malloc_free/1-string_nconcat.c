#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string.
 * @s2: pointer to second string.
 * @n: number of bytes s2 to concatenate to s1.
 *
 * Return: pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len1) != '\0')
		len1++;
	while (*(s2 + len2) != '\0')
		len2++;

	str = malloc(n + len1 + 1);

	if (str == NULL)
		return (s3);

	if (len2 >= n)
		len2 = n;

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}

	for (i = 0; i < n; i++)
		str[i + len1] = s2[i];

	str[len1 + i] = '\0';
	return (str);
}
