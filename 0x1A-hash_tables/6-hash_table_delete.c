#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - function to delete table
 * @ht: hash table
 * Description: function that deletes a table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];
		hash_node_t *temp;
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
