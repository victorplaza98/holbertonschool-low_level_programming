#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Creates an array of integers.
 * @min: min size.
 * @max: max size.
 * Return: return C
 */
int *array_range(int min, int max)
{
	int *c;
	int a, i;

	a = max - min;
	if (min > max)
	{
		return (NULL);
	}
	c = malloc(sizeof(int) * (a + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= (a); i++, min++)
	{
		c[i] = min;
	}
	return (c);
}
