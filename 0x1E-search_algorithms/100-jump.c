#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array
 * @array:  pointer to the first element
 * @size: number of elements in array
 * @value: value to search
 * Return:  first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (!array || size == 0)
		return (-1);

	i = 0;
	jump = 0;
	step = sqrt(size);
	while (array[jump] < value && jump < size)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i, jump);

	if (jump > size - 1)
		jump = size - 1;

	while (i <= jump)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
