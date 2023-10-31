#include  "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - a function that returns a pointer
 * @width: column size
 * @height: row size
 * Description: A function that returns a pointer to two dimensional array
 * Return: Integer value
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		grid[i] = (int *)malloc(height * sizeof(int));
		for (j = 0; j < height; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
	free(grid);
}
