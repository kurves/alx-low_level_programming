#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Description: advanced binary value
 * Return: integer
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t mid;
	size_t i;
	
	low = 0;
	high = size - 1;
	mid = 0;
	
	if (array == NULL || size == 0)
	{
		return (-1);
	}
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i != low)
			{
				printf(", ");
			}
			printf("%d", array[i]);
		}
		printf("\n");
		mid = low + (high - low) / 2;
		if (array[mid] == value)
		{
			if (mid == 0 || array[mid - 1] != value)
			{
				return (mid);
			}
			high = mid;
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid;
		}
	}
	return (-1);
}
