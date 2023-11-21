#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - funtion to add a node at given index
 * @head: start of list
 * @idx: index to add at
 * @n: size of elements
 * Description: function that adds a node to list
 * Return: list_t value
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));

		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;
	if (current == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
