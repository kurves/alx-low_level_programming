#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * skiplist_t - Searches for a value in a sorted list of integers
 * @list: Pointer to the head of the list to search in.
 * @value: Value to search for.
 * Description: seasrcg for a value in sorted list
 * Return: integer
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current;

	if (list == NULL)
	{
		return (NULL);
	}
	current = list;
	while (current->express && current->express->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->express->index, current->express->n);
		current = current->express;
	}
	current = current->express ? current->express : current;
	while (current)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
		{
			return (current);
		}
		current = current->next;
	}
	return NULL;
}
