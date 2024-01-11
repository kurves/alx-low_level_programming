#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - funtion to deletes a node
 * @head: start of listi
 * @index: index
 * Description: function that deletes a node to list
 * Return:integer
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;


	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	current = *head;
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
	while (current != NULL)
	{
		if (count == index)
		{
			if (current->prev != NULL)
			{
				current->prev->next = current->next;
			}
			if (current->next != NULL)
			{
				current->next->prev = current->prev;
			}
			free(current);
			return (1);
		}
		count++;
		current = current->next;
	}
	return (-1);
}
