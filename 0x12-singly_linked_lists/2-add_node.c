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
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t word_length;

	word_length = 0;

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
	while (str[word_length] != '\0')
	{
		word_length++;
	}
	new_node->next = *head;
	*head = new_node;
	printf("[%lu] %s\n", word_length, str);
	return (new_node);
}
