#include <stdarg.h>
#include "variadic_functions.h"


/**
 * sum_them_all - returns result of sum of parameters
 * @n: amount of paramateres
 *
 * Return: the sum, else  0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int a, Sum;

	if (n == 0)
		return (0);
	va_start(list, n);
	Sum = 0;
	for (a = 0; a < n; a++)

		Sum += va_arg(list, unsigned int);

	va_end(list);

	return (Sum);
}
