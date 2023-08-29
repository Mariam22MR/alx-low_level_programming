#include "main.h"

/**
 * *_strstr - locate a substring
 * @haystack: pointer character variable
 * @needle: pointer character variable
 * Return: heystack or null
 */

char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x + y] != needle[y])
			{
				break;
			}
		}
		if (!needle[y])
		{
			return (&haystack[x]);
		}
	}
	return ('\0');
}
