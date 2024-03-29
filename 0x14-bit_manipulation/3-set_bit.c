#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * set_bit - binary index  of int to 1
 * @n: given number
 * @index: index of binary
 * Description: function that prints index ofbinary representation of int
 * Return: integer value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	b = (1UL << index);
	*n |= b;
	return (1);
}
