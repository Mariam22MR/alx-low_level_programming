#include "lists.h"

/**
 * free_listint - frees a linked list.
 * @head: pointerto first node.
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
