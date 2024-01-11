#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_dlistint - funtion to free a list
 * @head: start of list
 * Description: function that frees a list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next_node;

	current = head;

	while (current != NULL)
	{
		next_node = current->next;
	        free(current);
        	current = next_node;
	}
}

