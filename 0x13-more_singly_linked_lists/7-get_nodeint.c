#include "lists.h"

/**
 * get_nodeint_at_index - return node in index
 * @head : pointer tofirst node.
 * @index: index of the node to git.
 * Return: pointer to node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; (n < index) && (head->next); n++)
	head = head->next;

	if (n < index)
		return (NULL);

	return (head);
}
