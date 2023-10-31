#include  "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - a function that frees a grid
 * @grid: size of grid
 * @height: row size
 * Description: A function that frees a grid previously created
 * Return: Return nothing
 */
void free_grid(int **grid, int height)
{
	int i;
	
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		free(grid[i]);
	}
	free(char_s);
}
