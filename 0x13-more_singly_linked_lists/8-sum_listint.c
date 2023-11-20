#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * sum_listint - sum of elements
 * @head: struct pointer start
 * Description: function that prints the sum of elements in list
 * Return: integer
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	current = head;
	sum = 0;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
