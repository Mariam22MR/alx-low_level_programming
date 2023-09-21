#include "lists.h"

/**
 * list_len - number of elements in a list.
 * @h: pointer to first node.
 *
 * Return: size of the list.
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
