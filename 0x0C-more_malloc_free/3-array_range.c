#include  "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - a function that cerates and array
 * @min: minimum number
 * @max: maximum number
 * Description: A function that creates an array of  integers
 * Return: Integer value
 */
int *array_range(int min, int max)
{
	int *char_s;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	char_s = malloc(sizeof(int) * (max - min + 1));

	if (char_s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
	{
		char_s[i] = min + i;
	}
	return (char_s);
	free(char_s);
}
