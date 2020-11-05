#include "holberton.h"

/**
 * flip_bits -  function that returns the number of bits you would need
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count;
	int num = 0;

	count = n ^ m;

	while (count)
	{
		num += count & 1;
		count = count >> 1;
	}

	return (num);
}
