#include "lists.h"

/**
 * print_dlistint -Pprint linked list
 * @h: Adriss of head node
 * Return: Size of list
 */

size_t print_dlistint(const dlistint_t *h);
{
	size_t x = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
