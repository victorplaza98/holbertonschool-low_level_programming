#include "holberton.h"
/**
 * _islower - check if arg is lowercase
 * @c: Character
 *
 * Return: 0
 */
int _islower(int c)
{
return ((c >= 'a' && c <= 'z') ? 1 : 0);
}