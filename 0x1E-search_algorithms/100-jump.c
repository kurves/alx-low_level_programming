#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 * @array: A pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 * Description: search algorithm
 * integer
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step;
        size_t prev;
		
	if (array == NULL)
	{
		return (-1);
	}
	step = sqrt(size);
	prev = 0;

	while (array[(step < size ? step : size) - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
		{
			return (-1);
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);
	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == (step < size ? step : size))
		{
			return (-1);
		}
	}
	if (array[prev] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		return (prev);
	}
	return (-1);
}
