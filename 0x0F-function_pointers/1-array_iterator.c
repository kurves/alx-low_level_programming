#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
#include <string.h>
/**
 * array_iterator - function that iterates through an array
 * @array: integer value array
 * @size: size of array
 * @array_action: function printer
 * Description: function that iterates through an array of given size
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, action array_action)
{
	unsigned long  int i;

	for (i = 0; i < size; ++i)
	{
		array_action(array[i]);
	}
}
