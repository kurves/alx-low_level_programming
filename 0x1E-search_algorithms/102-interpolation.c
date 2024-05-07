#include <stdio.h>
#include <stdlib.h>

/**
 * interpolation_search - Searches for a value in a sorted array
 * @array: A pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 * Description: iterpolation search
 * Return: The index of the value in the array if found, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{

	size_t low;
	size_t high;
	size_t pos;

	if (array == NULL)
	{
		return (-1);
	}
	low = 0;
	high = size - 1;
	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}
		if (array[pos] < value)
		{
			low = pos + 1;
		}else
		{
			high = pos - 1;
		}
	}
	printf("Value checked array[%lu] is out of range\n", low);
	return (-1);
}
