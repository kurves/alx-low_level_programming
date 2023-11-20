#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - function to free list
 * @head: struct pointer
 * Description: function that free a linked list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	if (head == NULL)
	{
		return;
	}
}
