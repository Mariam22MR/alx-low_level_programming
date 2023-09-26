#include "lists.h"

/**
 * pop_listint - removeto the head node.
 * @head : adress pointer to first node.
 *
 * Return: value of popped node.
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	node = *head;

	if (node == NULL)
		return (0);

	*head = node->next;
	n = node->n;
	free(node);
	return (n);
}
