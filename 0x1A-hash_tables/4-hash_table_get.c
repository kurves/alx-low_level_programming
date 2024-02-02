#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value for key
 * @ht: Hash table
 * @key: Key to
 * Return: Value associated with the key,
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	unsigned long int index = hash_djb2((const unsigned char *)key) % ht->size;
	hash_node_t *current = ht->array[index];
	
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
			current = current->next;
		}
		return (NULL);
}
