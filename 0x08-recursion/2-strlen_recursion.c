#include "main.h"

/**
 * _strlen_recursion - the string length
 * @s: the string
 * Return: 0 or the function
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s > '\0')
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
