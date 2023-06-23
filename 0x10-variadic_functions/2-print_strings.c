#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints string and new line.
 * @separator:pointer of string to be printed string
 * @n: amount of strings passed
 * @...:  variable number of strings
 *
 * Description: If one of the strings if NULL ,nil
 *       if separator is NULL,dont print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *string;
	unsigned int in;

	va_start(list, n);

	for (in = 0; in < n; in++)
	{
		string = va_arg(list, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (in != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(list);
}
