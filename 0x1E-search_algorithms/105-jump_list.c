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
	size_t jump;
	listint_t *node;
	
	node= list;
	jump = sqrt(size), prev = 0, current;
	
	if (list == NULL || size == 0)
	{
		return NULL;
	}
	while (node->index < jump && node->next != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n",node->index, node->n);
		if (node->n >= value)
		{
			break;
		}
		prev = node->index;
		node = node->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",prev, node->index);
	while (node != NULL && node->index <= size - 1)
	{
		printf("Value checked at index [%lu] = [%d]\n",node->index, node->n);
		if (node->n == value)
		{
			return node;
		}
        	else if
		{
			(node->n > value || node->index == size - 1)
		}
		break;
		node = node->next;
	}
	return NULL;
}
