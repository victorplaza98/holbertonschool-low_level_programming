#include "holberton.h"
/**
 * factorial - funtionfactorial
 * @n: Number factorial
 * Return: value factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else if (n > 1)
		return (n * factorial(n - 1));
	else
		return (n);
}
