#include "variadic_functions.h"

/**
 * print_strings - Prints string and new line
 * @separator: separator to print between the strings
 * @n: numbers of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *c;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(list, char *);
		if (c)
			printf("%s", c);
		else
			printf("(nil)");
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
