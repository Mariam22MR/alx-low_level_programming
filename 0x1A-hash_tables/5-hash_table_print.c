#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table to print.
 *
 * Return: no return
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int n;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (n = 0; n < ht->size; n++)
	{
		if (ht->array[n] != NULL)
		{
			if (flag == 1)
				printf(", ");

			tmp = ht->array[n];
			while (tmp != NULL)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				flag = 1;
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");

