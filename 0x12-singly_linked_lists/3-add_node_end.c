#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - funtion to add a node at the end
 * @head: start of list
 * @str: string character
 * Description: function that adds a node to list
 * Return: list_t value
 */
list_t *add_node_end(list_t **head, const char *str)
{
        list_t *new_node;

        if (str == NULL)
        {
                return (NULL);
        }
        new_node = malloc(sizeof(list_t));

        if (new_node == NULL)
        {
                return (NULL);
        }
        new_node->str = strdup(str);
        if (new_node->str == NULL)
        {
                free(new_node);
                return (NULL);
        }
        new_node->next = NULL;
	if (*head == NULL) 
	{
		*head = new_node;
	}
	else 
	{
		list_t *current = *head;
		while (current->next != NULL) 
		{
			current = current->next;
		}
		current->next = new_node;
	}
        return (new_node);
}
