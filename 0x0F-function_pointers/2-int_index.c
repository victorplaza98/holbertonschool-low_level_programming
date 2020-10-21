#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: point toarray
 * @size: size of array
 * @cmp: function that compares the numbers
 * Return: return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int x, y;

	if (size > 0 && array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			y = cmp(array[x]);
			if (y)
				break;
		}
		if (x < size)
			return (x);
	}
	return (-1);
}
