#include "holberton.h"
/**
 * _isalpha - decides if the character is a letter
 * Description: Thisis lowercase or uppercase
 * @c: int to check for alpha
 * Return: 1
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
