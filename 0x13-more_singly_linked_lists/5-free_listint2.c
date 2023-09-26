#include "lists.h"

/**
 * free_listint2 - frees the linked list.
 * @head : pointer to first node.
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *node;

	if (head == NULL)
		return;

	node = *head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
