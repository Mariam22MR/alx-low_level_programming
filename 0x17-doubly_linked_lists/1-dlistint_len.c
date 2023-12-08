#include "lists.h"

/**
 * dlistint_len - Return len of dlist
 * @h: Adress of head node
 * Return: Size of list
 */

size_t dlistint_len(const dlistint_t *h);
{
	size_t x = 0;
	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
