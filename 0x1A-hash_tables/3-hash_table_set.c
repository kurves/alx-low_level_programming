#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - function to set hash table
 * @ht: hash table pointer
 * @key: hash table pointer
 * @value: value to add
 * Description: function to set hash table values
 * Return: integer values
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}
	index = hash_djb2((const unsigned char *)key) % ht->size;
	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	if (value != NULL)
	{
		new_node->value = strdup(value);
	}
	else
	{
		new_node->value = strdup("");
	}
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
