
#include "holberton.h"
/**
 * sqrt_check - checks the number for_sqrt_recursion
 * @a:guess at sqrt
 * @b: number to find sqrt of
 * Return: sqrt
 */
int sqrt_check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (sqrt_check(a + 1, b));
}
/**
 * _sqrt_recursion - returns the natural
 * @n: integer
 * Return: natural
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
