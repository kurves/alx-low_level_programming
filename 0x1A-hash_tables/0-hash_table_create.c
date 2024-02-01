#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of array
 * Description: function to create a hash table
 * Return: pointer to the newly create table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_table = NULL;
	unsigned long int i;
	i = 0;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return NULL;
	}
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return NULL;
	}
	hash_table->size = size;
	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	return hash_table
	}
	
}
