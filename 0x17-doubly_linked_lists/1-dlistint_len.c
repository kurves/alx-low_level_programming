#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * dlistint_len - number of elements
 * @h: struct pointer
 * Description: doubly linked list node structure
 * Return: size_t value
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t c_count;

	c_count = 0;
	while (h != NULL)
	{
		c_count++;
		h = h->next;
	}
	return (c_count);
}
