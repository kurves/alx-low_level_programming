#include "hash_tables.h"
#include <stdio.h>

/**
 * key_index - gives the index key
 * @key: key of function
 * @size: size of hash table
 * Return: integer value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;
	return index;
}
