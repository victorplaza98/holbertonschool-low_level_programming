#include "holberton.h"
/**
 * _pow_recursion - funtion _pow_recursion
 * @x: The number to multiple
 * @y: The power to multiply it to
 * Return: Value to y raised to power of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (x * _pow_recursion(x, y - 1));
}
