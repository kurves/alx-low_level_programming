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
	int mid;
	size_t i;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	mid = size / 2;
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("\n");
	if (array[mid] == value)
	{
		return (mid);
	}
	else if (array[mid] > value)
	{
		return advanced_binary(array, mid, value);
	}
	else
	{
		return advanced_binary(array + mid + 1, size - mid - 1, value);
	}
}
