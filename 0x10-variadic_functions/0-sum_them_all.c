#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - sum of parameteres
 * @n: how many paramteres in function
 * @...: A variable number to add
 *
 * Return: the sum of all parameters else
 *       if n == 0 return 0
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

