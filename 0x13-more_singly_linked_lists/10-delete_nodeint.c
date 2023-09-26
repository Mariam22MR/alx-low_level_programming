#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node given index.
 * @head : pointer to the first node.
 * @index: index of the node to be deleted.
 *
 * Return: 1 if succeeds, -1 - if fails.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *node = *head;
	unsigned int i;

	if (node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
	if (node->next == NULL)
		return (-1);

	node = node->next;
	}

	tmp = node->next;
	node->next = tmp->next;
	free(tmp);
	return (1);
}
