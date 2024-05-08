#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array
 * @array: A pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 * Description: exponetial search algororithm
 * Return: The index of the value in the array if found, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i;
	size_t = low;
	size_t high;
	size_t mid;
	size_t j;

	if (array == NULL || size == 0)
	{
		return (-1);
	}
	if (array[0] == value)
	{
		return (0);
	}
	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	low = i / 2;
	high = (i < size) ? i : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	while (low <= high)
	{
		mid = low + (high - low) / 2;
		printf("Searching in array: ");
		for (j = low; j <= high; j++)
		{
			if (j > low)
			{
				printf(", ");
				printf("%d", array[j]);
			}
			printf("\n");
			if (array[mid] == value)
			{
				return (mid);
			}
			if (array[mid] < value)
			{
				low = mid + 1;
			}
			else
			{
				high = mid - 1;
			}
		}
		return -1;
}
