#include "holberton.h"

/**
 * more_numbers - print numbers x10
 *
 * Return: void
 */
void more_numbers(void)
{
	int num1, num2;

	for (num2 = 0; num2 < 10; num2++)
	{
		for (num1 = 0; num1 <= 14; num1++)
		{
			if (num1 >= 10)
				_putchar('0' + num1 / 10);
			_putchar('0' + num1 % 10);
		}

		_putchar('\n');
	}
}
