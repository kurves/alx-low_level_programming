#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * list_len- number of nodes
 * @h: struct pointer
 * Description: singly linked list node structure
 * Return: size_t value
 */
size_t list_len(const list_t *h)
{
	size_t c_count;

	c_count = 0;
	while (h != NULL)
	{
		h = h->next;
		c_count++;
	}
	return (c_count);
}
