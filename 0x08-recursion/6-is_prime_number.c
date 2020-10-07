#include "holberton.h"
/**
 * prime_number_check - check if number is prime
 * @i: number 1
 * @j: number 2
 * Return: 1 if prime, 0 if no
 */
int prime_number_check(int i, int j)
{
	if (i % j == 0 && j != (i / 2))
		return (0);
	else if (j >= (i / 2))
		return (1);
	else
		return (prime_number_check(i, j + 1));
}
/**
 * is_prime_number - take a number is prime
 * @n: number
 * Return: void
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (prime_number_check(n, 2));
	else if (n < 0)
		return (0);
	return (0);
}
