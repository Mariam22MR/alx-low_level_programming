#include "main.h"
#include <stdio.h>
/**
 * * _strpbrk - search a string for any of a set bytes
 * * @s: string to search
 * * @accept: string to match
 * * Return: pointer to index of string at first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
