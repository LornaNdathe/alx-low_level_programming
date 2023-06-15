#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - use malloc to allocate memory
 * @b: amount of bytes
 *
 * Return: adress of memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}


