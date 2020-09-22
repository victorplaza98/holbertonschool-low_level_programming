#include "holberton.h"
/**
 * times_table - prints a times-table 0 to 9
 * Description: Prints a multiplication a times_table
 * Return: 0 void
 */
void times_table(void)
{
	int x, y;

	x = 0;
	y = 0;
	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			if ((x * y) < 10)
			{
				if (y != 0)
				{
					_putchar(' ');
				}
				_putchar((x * y) + '0');
				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(((x * y) / 10) + '0');
				_putchar(((x * y) % 10) + '0');
				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			y++;
		}
		_putchar('\n');
		x++;
	}

}
