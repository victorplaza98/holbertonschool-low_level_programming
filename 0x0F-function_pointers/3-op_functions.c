#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - funtion that adds tow numbers
 * @a: firts number
 * @b: two number
 * Return: Operation value
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - funtion that subtracts tow numbers
 * @a: firts number
 * @b: two number
 * Return: Operation value
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - funtion that multiplies tow numbers
 * @a: firts number
 * @b: two number
 * Return: Operation value
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - funtion that divides tow numbers
 * @a: firts number
 * @b: two number
 * Return: Operation value
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - funtion that divides two numbers into multiples
 * @a: firts number
 * @b: two number
 * Return: Operation value
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
