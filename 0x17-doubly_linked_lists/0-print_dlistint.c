#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_dlistint - number of nodes
 * @h: struct pointer
 * Description: doubly linked list node structure
 * Return: size_t value
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t c_count;

	c_count = 0;
	while (h != NULL)
	{
		printf("%d", h->n);
		if (h->next != NULL)
		{
			printf("\n");
		}
		else
		{
			printf("\n");
		}
		h = h->next;
		c_count++;
	}
	return (c_count);
}
