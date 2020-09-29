#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Print a numbers items in a array
 * @a: array
 * @n: numbers of items the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
		i++;
	}
	putchar('\n');
}
