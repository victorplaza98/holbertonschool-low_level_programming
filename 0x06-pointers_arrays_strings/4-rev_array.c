#include "holberton.h"
/**
 * reverse_array - reverse array
 * @a: array
 * @n: size
 * Return: void
 */
void reverse_array(int *a, int n)
{
	for (; --n > 0; ++a, --n)
	{
		*a ^= a[n];
		a[n] ^= *a;
		*a ^= a[n];
	}
}
