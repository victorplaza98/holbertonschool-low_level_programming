#include "holberton.h"
/**
 * print_last_digit - Prints las digit
 * @num: number
 * Description: This program prints las digit
 * Return: value of the las digit
 */
int print_last_digit(int num)
{
	int lastdigit = num % 10;

	if (lastdigit < 0)
	{
		_putchar(-lastdigit + '0');
		return (-lastdigit);
	}
	else
	{
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
}
