#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_t - frees a linked list
 * @head: head of list
 *
 * Return: void
 */

void free_listint_t(listint_t **head)
{
	listint_t *tmp, *hare;

	if (head != NULL)
	{
		hare = *head;
		while ((tmp = hare) != NULL)
		{
			hare = hare->next;
			free(tmp);
		}
		*head = NULL;
	}
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

	ptr = find_listint_loop(*h);

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
