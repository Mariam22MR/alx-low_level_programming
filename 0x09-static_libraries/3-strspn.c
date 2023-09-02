#include "main.h"

/**
 * _strspn - gets the length of a substring
 * @s: string
 * @accept: bytes
 * Return: j
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != s[j]; i++)
		{
			if (accept[i] == '\0')
			{
				return (j);
			}
		}
	}
	return (j);
}
