#include "holberton.h"
/**
 * puts2 - prints in reverse
 * @str: pointers
 * Description: takes a pointer an update de value
 * Return: vaoid
 */
void puts2(char *str)
{
	int i = 0, c;

	while (str[i] != '\0')
	{
		i++;
	}
	for (c = 0; c <= (i - 1); c++)
	{
		if (c % 2 == 0)
		_putchar(*(str + c));
	}
_putchar('\n');
}
