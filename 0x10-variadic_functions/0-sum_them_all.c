#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: how many parameters
 * @...:  variable no of paramters to return sum of.
 *
 * Return: sum of parameters else if n is o then 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int a, sum = 0;

	va_start(p, n);

	for (a = 0; a < n; a++)
		sum += va_arg(p, int);

	va_end(p);

	return (sum);
}

