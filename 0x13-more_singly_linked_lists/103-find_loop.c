#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - find the loop in linked list.
 * @head: head of list.
 *
 * Return: address of the node where the loop starts, 
 * or NULL if there is no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x = head,
	listint_t *y = head;

	if (head == NULL)
		return (NULL);

	while (x && y && y->next)
	{
		x = x->next;
		y = y->next->next;

		if (x == y)
		{
			x = head;

			while (x != y)
			{
				x = x->next;
				y = y->next;
			}
			return (x);
		}
	}
	return (NULL);
}
