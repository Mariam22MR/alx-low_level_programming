#include "lists.h"
#include <stdlib.h>

/**
 * looped_listint_count - finds loop in linked list.
 * @head: linked list to check.
 *
 * Return: adress of node whereloop start, 0 if no loop.
 */

size_t looped_listint_count(listint_t *head)
{
	listint_t *tmp, *hare;

	if (head == NULL)
		return (0);
	
	for (hare = head->next; hare != NULL; hare = hare->next)
	{
		if (hare == hare->next)
			return (hare);

		for (tmp = head; tmp != hare; tmp = tmp->next)
			if (tmp == hare->next)
				return (hare->next);
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint list safely. 
 * @h: pointer to adress of the head of list.
 *
 * Return: number of the list freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *node;
	size_t ptr, i;

	ptr = looped_listint_count(*h);

	if (ptr == 0)
	{
		for (; h != NULL && *h != NULL; ptr++)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
		}
	}

	else
	{
		for (i = 0; i < ptr; i++)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
		}

		*h = NULL;
	}

	h = NULL;

	return (ptr);
}
