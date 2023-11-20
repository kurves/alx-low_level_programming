#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - print element at given index
 * @head: struct pointer start
 * @index: index of given element
 * Description: function that prints the  element  in index
 * Return: size_t value
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c_count;
	listint_t *current;

	c_count = 0;
	current = head;
	while (current != NULL)
	{

		if (c_count == index)
		{
			return (current);
		}
		current = current->next;
		c_count++;
	}
	return (NULL);
}
