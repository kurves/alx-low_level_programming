#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
#include <string.h>
/**
 * array_iterator - function that iterates through an array
 * @array: integer value array
 * @size: size of array
 * @action: function printer
 * Description: function that iterates through an array of given size
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long  int i;

	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
}
