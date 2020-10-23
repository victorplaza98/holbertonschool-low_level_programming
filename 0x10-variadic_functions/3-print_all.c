#include "variadic_functions.h"
/**
 * print_all - Function that returns pointer to funcion
 * @format: list of argument types passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int x = 0, y = 1;
	char *h;

	while (format)
	{
		va_start(list, format);
		while (format[x])
		{
			y = 1;
			switch (format[x])
			{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				h = va_arg(list, char *);
				if (h == NULL)
					h = "(nil)";
				printf("%s", h);
				break;
			default:
				y = 0;
				break;
			}
			if (format[x + 1] && y)
				printf(", ");
			x++;
		}
		va_end(list);
		break;
	}
	printf("\n");
}
