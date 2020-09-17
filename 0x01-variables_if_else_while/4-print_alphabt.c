/*
 * 2-print_alphabet.c
 */

#include <stdio.h>

/**
 * main - Print_alphabet
 * Description: Conditionals in C
 * Return: void
 */
int main(void)
{
	char betty;

	for (betty = 'a'; betty <= 'z'; betty++)
	{
		if (betty != 'e' && betty != 'q')
			putchar(betty);
	}

	putchar('\n');

	return (0);
}
