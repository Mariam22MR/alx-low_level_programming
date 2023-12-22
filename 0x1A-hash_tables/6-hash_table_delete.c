#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table to delete.
 *
 * Return: no return.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *c;
	unsigned long int n;

	for (n = 0; n < ht->size; n++)
	{
		if (ht->array[n] != NULL)
		{
			node = ht->array[n];
			while (node != NULL)
			{
				c = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = c;
			}
		}
	}
	free(head->array);
	free(head);
}
