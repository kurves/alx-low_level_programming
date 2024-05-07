#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Searches for a value in array
 * @array: A pointer to the first element of array
 * @size: The number of elements in the array
 * @value: The value to search for
 * Description: function to search for value
 * Return: integer
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
