#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: pointer to the array
 * @size: number of elements
 * @cmp: pointer to function used for comparison
 * Return: Index of the first matching,
 * else  -1 if no match or invalid size
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}

