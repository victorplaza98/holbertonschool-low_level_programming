/*
 * 7-print_tebahpla.c
 */

#include <stdio.h>

/**
 * main - Print tebahpla
 * Description: Conditionals in C
 * Return: void
 */
int main(void)
{
	char betty;

	for (betty = 'z'; betty >= 'a'; betty--)
		putchar(betty);

	putchar('\n');

	return (0);
}
