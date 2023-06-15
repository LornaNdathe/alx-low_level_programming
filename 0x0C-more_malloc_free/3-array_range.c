#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array
 * @min: minimum input
 * @max: maximum input
 * Return: 0
 */
int *array_range(int min, int max)
{
	int a, b;
	int *adress;

	if (min > max)
		return (NULL);
	b = max - min + 1;
	adress = malloc(sizeof(int) * b);
	if (adress == NULL)
		return (NULL);
	for (a = 0; min <= max; a++, min++)
	{
		adress[a] = min;
	}
	return (adress);
}
