#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - funtion to add a node at given index
 * @h: start of list
 * @idx: index to add at
 * @n: size of elements
 * Description: function that adds a node to list
 * Return: list_t value
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int count;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*h == NULL && idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	while (current != NULL)
	{
		if (count == idx)
		{
			new_node->prev = current->prev;
			new_node->next = current;
			if (current->prev != NULL)
			{
				current->prev->next = new_node;
			}
			else
			{
				*h = new_node;
			}
			current->prev = new_node;
			return (new_node);
		}
		count++;
		current = current->next;
	}
	free(new_node);
	return (NULL);
}
