#include "lists.h"

/**
 * print_listint - prints a linked list.
 * @h: pointerto first node.
 *
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		l++;
		h = h->next;
	}
	return (l);
}
