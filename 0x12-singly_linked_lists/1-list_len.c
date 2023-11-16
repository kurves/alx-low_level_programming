#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - number of nodes
 * @h: struct pointer
 * Description: singly linked list node structure
 * Return: size_t value
 */
size_t print_list(const list_t *h)
{
        size_t c_count;

        c_count = 0;
        while (h != NULL)
        {
                if (h->str == NULL)
                {
                        printf("[0] (nil)\n");
        }
        else
        {
                printf("[%lu] %s\n", c_count, h->str);
        }
        h = h->next;
        c_count++;
        }
        return (c_count);
}
