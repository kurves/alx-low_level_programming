#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 * @array: A pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 * Description: search algorithm
 * Return: integert add .
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step;
	size_t prev;
	size_t i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	step = sqrt(size);
	prev = 0;
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (array[prev] < value)
	{
		prev += step;
		if (prev >= size)
		{
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);
	for (i = prev - step; i <= prev; i++)
	{
		if (i < size)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
