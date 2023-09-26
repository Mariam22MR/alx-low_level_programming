#include "lists.h"

/**
 * listint_len - prints a linked list.
 * @h: pointer to first node.
 *
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		l++;
		h = h->next;
	}
	return (l);
}
