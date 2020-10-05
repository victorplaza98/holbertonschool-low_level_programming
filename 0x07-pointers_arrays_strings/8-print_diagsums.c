#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints two diagonals
 * @a: pointer to 2d array
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, y, num1, num2;

	num1 = 0;
	num2 = 0;

	for (x = 0; x < size * size; x += size + 1)
	{
		num1 += a[x];
	}
	for (y = size - 1; y < (size * size) - 1; y += size - 1)
	{
		num2 += a[y];
	}
	printf("%d, %d\n", num1, num2);
}
