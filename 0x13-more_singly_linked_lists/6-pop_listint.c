#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - funtion to deletes a node
 * @head: start of list
 * Description: function that deletes a node to list
 * Return:integer
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;


	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	current = *head;
	if (current == NULL)
	{
		return (0);
	}
	*head = (*head)->next;
	data = current->n;
	free(current);
	return (data);
}
