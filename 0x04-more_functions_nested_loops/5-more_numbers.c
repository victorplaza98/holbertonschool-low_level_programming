#include "holberton.h"

/**
 * more_numbers - x10
 *
 * Return: void
 */


void more_numbers(void)
{
	char num1, num2, num3, i;

	for (i = 0; i < 10; i++)
	{
		for (num3 = 0; num3 <= 14; num3++)
		{
			if (num3 < 10)
				num2 = num3;
			else
			{
				num1 = c / 10;
				num2 = num3 % 10;
				_putchar('0' + num1);
			}
			_putchar('0' + num2);
		}
		_putchar('\n');
	}
}
