#include "holberton.h"
/**
 * times_table - prints a times-table 0 to 9
 * Description: Prints a multiplication a times_table
 * Return: 0 void
 */
void times_table(void)
{
	int colum = 0;
	int row = 0;

	while (row <= 9)
	{
		colum = 0;
		while (colum <= 9)
		{
			if ((row * colum) > 9)
			{
				_putchar(' ');
				_putchar(((row * colum) / 10) + '0');
				_putchar(((row * colum) % 10) + '0');
			}
			else
			{
				if (colum != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(row * colum) + '0');
			}
			if (colum != 9)
				_putchar(',');
			colum++;
		}
		_putchar('\n');
		row++;
	}
}
