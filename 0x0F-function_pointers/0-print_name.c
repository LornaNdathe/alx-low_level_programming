#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints out name using
 * pointer to function
 * @name: name of string to add
 * @f: pointer to function
 * Return: nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

