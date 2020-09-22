#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints all numbers from to 98
 * @n: number start
 * Return: 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
			printf("%i, ", n);
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
			printf("%i, ", n);
	}
	printf("98\n");
}
