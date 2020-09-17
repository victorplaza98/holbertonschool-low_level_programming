/*
 * 8-print_base16.c
 */

#include <stdio.h>

/**
 * main - Print_numbers
 * Description: Conditionals in C
 * Return: void
 */
int main(void)
{
	int num;
	char betty;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (betty = 'a'; betty <= 'f'; betty++)
		putchar(betty);

	putchar('\n');

	return (0);
}
