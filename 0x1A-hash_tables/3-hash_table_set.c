#include "hash_tables.h"

/**
 * hash_table_set - set kay to value in hash table.
 * @ht: pointer to add element to hash table.
 * @key: key to add date.
 * @value: value associated with key.
 * Return: failure 0. if successful 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp;
	char *new_value;
	unsigned long int index, n;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new_value = strdup(value);
	if (new_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (n = index; ht->array[n]; n++)
	{
		if (strcmp(ht->array[n]->key, key) == 0)
		{
			free(ht->array[n]->value);
			ht->array[n]->value = new_value;
			return (1);
		}
	}

	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
	{
		free(new_value);
		return (0);
	}
	tmp->key = strdup(key);
	if (tmp->key == NULL)
	{
		free(tmp);
		return (0);
	}
	tmp->value = new_value;
	tmp->next = ht->array[index];
	ht->array[index] = tmp;
	return (1);
}
