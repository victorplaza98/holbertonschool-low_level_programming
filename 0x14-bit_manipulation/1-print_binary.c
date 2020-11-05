#include "holberton.h"

/**
 * print_binary - function that prints the binary
 * representation of a number
 * @n: Value decimal to
 * Return: void
 */
void print_binary(unsigned long int n)
{
	char teamf;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	teamf = (n & 1) ? '1' : '0';
	_putchar(teamf);
}
