#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array:  pointer to the first element
 * @size: number of elements in array
 * @value: value to search
 * Return:  first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left = 0, right = size - 1, temp = 0;

	if (array)
		while (left <= right)
		{
			temp = (left + right) / 2;

			/* Prints the current array */
			printf("Searching in array: ");
			for (i = left; i <= right; i++)
				i != right ? printf("%d, ", array[i]) : printf("%d", array[i]);
			printf("\n");

			if (array[temp] < value)
				left = temp + 1;
			else if (array[temp] > value)
				right = temp - 1;
			else
				return (temp);
		}
	return (-1);
}
