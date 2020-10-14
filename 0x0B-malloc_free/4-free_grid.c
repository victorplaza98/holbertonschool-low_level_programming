#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - 2 dimensional grid
 * @grid: Array
 * @height: rows.
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid[i]);
}

