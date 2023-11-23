#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * get_bit - binary index  of int
 * @n: given number
 * @index: index of binary
 * Description: function that prints index ofbinary representation of int
 * Return: integer value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	b = (n >> index) & 1;

	return ((int)b);
}
