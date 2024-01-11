#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * sum_dlistint - sum of elements
 * @head: struct pointer start
 * Description: function that prints the sum of elements in list
 * Return: integer
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
