#include "variadic_functions.h"



/**
 * print_all - prints anything
 *
 * @format: types of arguments passed
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int a = 0;
	char *string, *space= "";

	va_list lst;

	va_start(lst, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", space, va_arg(lst, int));
					break;
				case 'i':
					printf("%s%d", space, va_arg(lst, int));
					break;
				case 'f':
					printf("%s%f", space, va_arg(lst, double));
					break;
				case 's':
					string = va_arg(lst, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", space, string);
					break;

				default:
					a++;
					continue;
			}
			space = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(lst);
}

