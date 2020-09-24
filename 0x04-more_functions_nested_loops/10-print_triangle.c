#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int num1, num2;

	if (size <= 0)
		_putchar('\n');
	for (num1 = 1; num1 <= size; num1++)
	{
		for (num2 = 1; num2 <= size; num2++)
		{
			if (num2 <= (size - num1))
				_putchar(' ');
			else
				_putchar('#');
		}
	_putchar('\n');
	}

}
