#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 * @array:  pointer to the first element
 * @size: number of elements in array
 * @value: value to search
 * Return:  first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array != NULL && size > 0)
	{
		left = 0;
		right = size - 1;
		while (array[left] != array[right])
		{
			i = left + (((double)(right - left) / (array[right] - array[left])) *
				    (value - array[left]));
			if (i < left || i > right)
			{
				printf("Value checked array[%lu] is out of range\n", i);
				break;
			}
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] < value)
				left = i + 1;
			else if (array[i] > value)
				right = i - 1;
			else
				return (i);
		}
	}
	return (-1);
}
