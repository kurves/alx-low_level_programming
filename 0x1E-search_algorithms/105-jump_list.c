#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in list.
 * @value: Value to search for.
 * Description: seasrcg for a value in sorted list
 * Return: integer
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *node;

	node= list;
	
	if (list == NULL || size == 0)
	{
		return NULL;
	}
	while (node != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		if (node->n == value)
		{
			return node;
		}
		node = node->next;
	}
	return NULL;
}
