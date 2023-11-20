#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint - print number of elements
 * @h: struct pointer
 * Description: function that prints the number of elements in list
 * Return: size_t value
 */
size_t print_listint(const listint_t *h)
{
	size_t c_count;

	c_count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c_count++;
	}
	return (c_count);
}
