#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - finction to print table
 * @ht:  table to print
 * Description: function to print table contents
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	int printed_table;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	printed_table = 0;
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

		while (current != NULL)
		{
			if (printed_table > 0)
			{
				printf(", ");
				printf("'%s': '%s'", current->key, current->value);
				printed_table++;
				current = current->next;
			}
		}
		printf("}\n");

	}
}
