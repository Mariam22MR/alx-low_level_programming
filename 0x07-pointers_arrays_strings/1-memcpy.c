#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: char to copy
 * @n: length of b to be copies
 *
 * Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
