#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: number bits in
 * @index: index at which to check bit
 * Return: Value of the bit in the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned int) * sizeof(long)))
		return (-1);

	return ((n >> index) & 1);
}
