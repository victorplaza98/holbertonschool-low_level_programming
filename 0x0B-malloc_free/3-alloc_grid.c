#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: Width
 * @height: Heihgt
 * Return: Null or C
 */
int **alloc_grid(int width, int height)
{
	int **c, i, y, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	c = malloc(height * sizeof(int *));

	if (c == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		c[i] = malloc(width * sizeof(int));
		if (c[i] == NULL)
		{
			for (z = 0; z < i; z++)
			{
				free(c[z]);
			}
			free(c);
			return (NULL);

		}
		for (y = 0; y < width; y++)
		{
			c[i][y] = 0;
		}
	}
	return (c);
}
