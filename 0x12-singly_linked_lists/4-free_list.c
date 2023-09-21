#include "lists.h"

/**
 * free_list - frees all nodes of list
 * @head: pointer to head node.
 *
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *next_node;

	while ((next_node = head) != NULL)
	{
		head = head->next;
		free(next_node->str);
		free(next_node);
	}
}
