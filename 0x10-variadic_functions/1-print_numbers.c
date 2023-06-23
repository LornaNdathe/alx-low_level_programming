#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers
 * @separator: pointer  printed between numbers.
 * @n: amount of integers passed
 * @...: A variable number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int no;

	va_start(list, n);

	for (no = 0; no < n; no++)
	{
		printf("%d", va_arg(list, int));

		if (no != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(list);
}

