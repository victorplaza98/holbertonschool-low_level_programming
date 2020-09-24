#include "holberton.h"

/**
 * print_diagonal - prints diagonal line
 * @n: integer
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int num1, num2;

	if (n <= 0)
		_putchar('\n');
	for (num1 = 0; num1 < n; num1++)
	{
		for (num2 = 0; num2 < num1; num2++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
