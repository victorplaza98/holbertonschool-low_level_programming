#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - prints all numbers from to 98
 * @n: number start
 * Return: 0
 */
void print_times_table(int n)
{
	int num1, num2, num3, num4;

	if ((n < 15) && (n >= 0))
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			for (num2 = 0; num2 <= n; num2++)
			{
				num4 = num1 * num2;
				if (num2 != 0)
				{
					_putchar(',');
					_putchar(' ');
				if (num4 <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				}
				if (num4 > 99)
				{
					num3 = num4 / 10;
					_putchar(num3 / 10 + '0');
					_putchar(num3 % 10 + '0');
				}
				else if ((num4 >= 10) && (num4 <= 100))
				{
					_putchar(' ');
					_putchar(num4 / 10 + '0');
				}
				_putchar(num4 % 10 + '0');
			}
		_putchar('\n');
		}
	}
}
