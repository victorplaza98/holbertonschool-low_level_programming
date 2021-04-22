#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: array to print
 * @size: size of array
 * return: void
 */
void print_array(int *array, size_t size)
{
	size_t i;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("\n");
}

/**
 * advanced_binary - searches for a value in an array
 * @array:  pointer to the first element
 * @size: number of elements in array
 * @value: value to search
 * Return:  first index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	int i = -1, min;
	size_t x;

	if (array != NULL && size > 0)
	{
		print_array(array, size);
		x = (size - 1) / 2;
		min = array[x];
		if (min < value)
		{
			i = advanced_binary(array + x + 1, size - (x + 1), value);
			if (i >= 0)
				i += x + 1;
		}
		else if (min > value)
			i = advanced_binary(array, x + 1, value);
		else if (x == 0 || array[x - 1] < min)
			i = x;
		else
			i = advanced_binary(array, x + 1, value);
	}
	return (i);
}
