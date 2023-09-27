#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node to given index.
 * @head : pointer to the first node.
 * @idx  : index of the list where the new node
 * @n    : value for the new node.
 *
 * Return: pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	*temp = *head;
	unsigned int i;

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
