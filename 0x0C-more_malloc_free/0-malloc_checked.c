#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: int
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
