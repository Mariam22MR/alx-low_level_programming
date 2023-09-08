#include "main.h"
#include <stdlib.h>

/**
 * _realloc - allocates a  memory block using malloc and free.
 * @ptr: pointer to memory allocates with malloc old_size.
 * @old_size: bytes allocated.
 * @new_size: size in bytes.
 * Return: NULL if new_size = 0 and ptr is not NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
