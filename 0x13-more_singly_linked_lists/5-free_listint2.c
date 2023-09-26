#include "lists.h"

/**
 * free_listint2 - frees the linked list.
 * @head : pointer to first node.
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	while (*head)
	{
		temp = *head;
		*head = *head->next;
		free(temp);
	}
	head = NULL;
}
