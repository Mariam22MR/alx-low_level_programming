#include "hash_tables.h"

/**
 * shash_table_create - creat  sorted hash table.
 * @size: size  hash table.
 *
 * Return: NULL.
 *
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int n;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		ht->array[n] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - adds the element to sorted hash table.
 * @ht: pointer to  sorted hash table.
 * @key: key to add date.
 * @value: value associated with key.
 *
 * Return: failure 0. if succsses 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *tmp;
	char *new_value;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new_value = strdup(value);
	if (new_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->snext;
	}

	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
	{
		free(new_value);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(new_value);
		free(node);
		return (0);
	}
	node->value = new_value;
	node->next = ht->array[index];
	ht->array[index] = node;

	if (ht->shead == NULL)
	{
		node->sprev = NULL;
		node>snext = NULL;
		ht->shead = node;
		ht->stail = node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		node->sprev = NULL;
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		node->sprev = tmp;
		node->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = node;
		else
			tmp->snext->sprev = node;
		tmp->snext = node;
	}

	return (1);
}

/**
 * shash_table_get - have value associated with the key.
 * @ht: pointer to sorted hash table.
 * @key: key to add date.
 *
 * Return: if key doesnot match,  NULL.
 *
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *new;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	new = ht->shead;
	while (new != NULL && strcmp(new->key, key) != 0)
		new = new->snext;

	return ((new == NULL) ? NULL : new->value);
}

/**
 * shash_table_print - prints hash table.
 * @ht: pointer to sorted hash table to print.
 *
 * Return: no return
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *new;

	if (ht == NULL)
		return;

	new = ht->shead;
	printf("{");
	while (new != NULL)
	{
		printf("'%s': '%s'", new->key, new->value);
		new = newe->snext;
		if (new != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints  hash table.
 * @ht: pointers to sorted hash table to print.
 *
 * Return: no return
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *new;

	if (ht == NULL)
		return;

	new = ht->stail;
	printf("{");
	while (new != NULL)
	{
		printf("'%s': '%s'", new->key, new->value);
		new = new->sprev;
		if (new != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes sorted hash table.
 * @ht: pointers to sorted hash table to print.
 *
 * Return: no return.
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *new, *tmp;

	if (ht == NULL)
		return;

	new = ht->shead;
	while (new)
	{
		tmp = new->snext;
		free(new->key);
		free(new->value);
		free(new);
		new = tmp;
	}

	free(head->array);
	free(head);

