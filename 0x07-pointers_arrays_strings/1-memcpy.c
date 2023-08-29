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
	unsigned int j;
	for (j = 0; n > 0; j++)
	{
		dest[j] = src[j];
	}
	
	return (dest);
}
