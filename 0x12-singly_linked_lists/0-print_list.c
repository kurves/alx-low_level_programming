#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - number of nodes
 * @h: struct pointer
 * Description: singly linked list node structure
 * Return: size_t value
 */
size_t print_list(const list_t *h)
{
	size_t c_count, word_length;

	c_count = 0;
	word_length = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			word_length = strlen(h->str);	
			printf("[%lu] %s\n", word_length, h->str);
		}
		h = h->next;
		c_count++;
	}
	return (c_count);
}
