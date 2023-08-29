#include "main.h"

/**
 * *_memset - copies memory area
 * @dest: memory area
 * @src: char to copy
 * @n: length of b to be copies
 * Return: pointer to s
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;
	
	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
