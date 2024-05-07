#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Description: function to binary searh array
 * Return: integer
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left;
	size_t right;
	size_t mid;
	size_t i;	
	
	left = 0;
	right = size - 1;
	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
        }
	printf("\n");
	if (array[mid] == value)
	{
		return (mid);
	}
	else if (array[mid] < value)
	{
            left = mid + 1;
	}
	else
	{
            right = mid - 1;
	}
	}
	return (-1);
}
