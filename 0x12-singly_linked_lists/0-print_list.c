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
	long unsigned int len;
	len = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
	}
	else
	{
		printf("[%lu] %s\n", len, h->str);
	}
	h = h->next;
	len++;
	}
	return (len);
}
