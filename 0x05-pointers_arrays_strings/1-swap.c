#include "holberton.h"

/**
 * swap_int - swaps two values
 * @a: integer is a point
 * @b: two integer point
 * Return: 1
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
