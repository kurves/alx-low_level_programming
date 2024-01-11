#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - funtion to add a node
 * @head: start of list
 * @str: string character
 * Description: function that adds a node to list
 * Return: list_t value
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
	        *head = new_node;
        	return new_node;
	}
       	last = *head;

	while (last->next != NULL) 
	{
		last = last->next;
	}
	last->next = new_node;
    	new_node->prev = last;
	return (new_node);
}
