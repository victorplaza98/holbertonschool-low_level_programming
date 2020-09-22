#include "holberton.h"
/**
 * _islower - check if arg is lowercase
 *
 *
 * Return: 0
 */

int _islower(int c)
{
	if (c <= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
