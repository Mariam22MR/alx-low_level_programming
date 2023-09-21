#include "lists.h"

/**
 * add_node_end - adds a new node to the end of list,
 * @head: address of pointer to head node.
 * @str: string field of node.
 *
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	size_t i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new_node->len = i;
	new_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}

	return (*head);
}
