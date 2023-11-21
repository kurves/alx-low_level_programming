#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - funtion to deletes a node
 * @head: start of list
 * Description: function that deletes a node to list
 * Return:integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	int data;


	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}
	current = *head;
	if (current == NULL)
	{
		return (0);
	}
	*head = (*head)->next;
	data = current->n;
	free(current);
	return (1);
}
