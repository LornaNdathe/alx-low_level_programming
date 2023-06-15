#include <stdlib.h>
#include "main.h"

/**
 * *_memset - allocated memory wit byte
 * @s: where memory is allocated
 * @b: char to copy
 * @n: times to copy b
 *
 * Return: adress of  memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *adress;

	if (nmemb == 0 || size == 0)
		return (NULL);

	adress = malloc(size * nmemb);
	if (adress == NULL)
		return (NULL);

	_memset(adress, 0, nmemb * size);

	return (adress);
}

