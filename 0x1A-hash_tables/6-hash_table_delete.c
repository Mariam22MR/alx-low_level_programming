#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table to delete.
 *
 * Return: no return
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int n = 0;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	for (n < ht->size; n++)
	{
		while (ht->array[n] != NULL)
		{
			node = ht->array[n]->node;
			free(ht->array[n]->key);
			free(ht->array[n]->value);
			free(ht->array[n]);
			ht->array[n] = node;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
