#include "holberton.h"
/**
 * times_table - prints a times-table 0 to 9
 * Description: Prints a multiplication a times_table
 * Return: 0 void
 */
void times_table(void)
{
	int a, b, x, y, z;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a < 10; a++)
		{
			x = a * b;
			y = x / 10;
			z = x % 10;
			if (a > 0)
				_putchar(' ');
			if ((x < 10) && (a > 0))
				_putchar(' ');
			else if (x > 9)
				_putchar(y + '0');
			_putchar(z + '0');
			if (a < 9)
				_putchar(',');
			else if (a == 9)
				_putchar('\n');
		}
	}
}
