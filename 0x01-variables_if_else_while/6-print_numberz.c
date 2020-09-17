/*
 * 6-print_numberz.c
 */

#include <stdio.h>

/**
 * main - Print_numberz
 * Description: Conditional in C
 * Return: void
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
