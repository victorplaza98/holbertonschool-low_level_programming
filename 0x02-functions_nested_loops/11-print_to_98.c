#include "holberton.h"
/**
 * print_to_98 - prints all numbers from to 98
 * @n: number start
 * Return: 0
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
			n++;
		}

		else
		{
			printf("%d", n);
			printf(",");
			printf(" ");
			n--;
		}
	}

	printf("98");
	printf("\n");
}
