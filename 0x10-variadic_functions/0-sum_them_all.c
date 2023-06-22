#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: how many parameters
 * @...:  variable no of paramters to return sum of.
 *
 * Return: sum of paramateres otherwise 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list g;
	unsigned int a, sum = 0;

	va_start(g, n);

	for (a = 0; a < n; a++)
		sum += va_arg(g, int);

	va_end(g);

	return (sum);
}
