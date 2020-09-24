#include "holberton.h"
/**
 * _isupper - Checks for uppercase
 * @c: charater
 * Return: 1 is a uppercase 0 uppers
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
