/*
 * 3-print_alphabets.c
 */

#include <stdio.h>

/**
 * main - Print_alphabets A - Z
 * Description: Conditionals in C
 * Return: void
 */
int main(void)
{
	char betty;

	for (betty = 'A'; betty <= 'Z'; betty++)
		putchar(betty);

	putchar('\n');

	return (0);
}
