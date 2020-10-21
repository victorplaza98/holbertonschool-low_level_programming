#include "function_pointers.h"
/**
 * array_iterator - elements of array
 * @array: array to funtion
 * @size: size of array
 * @action: pointer of the funtion
 * Return: Return void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
