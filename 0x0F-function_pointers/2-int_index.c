#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
#include <string.h>
/**
 * int_index - function that searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function printer
 * Description: function that prints a name
 * Return: Nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 0)
	{
		return (1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
