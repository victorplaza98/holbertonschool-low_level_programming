/*
 * 0-positive_or_negative.c
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Positive or negative
 * Description: Conditionals in C
 * Return: void
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
