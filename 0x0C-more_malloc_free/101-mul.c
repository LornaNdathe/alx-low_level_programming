#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"

/**
 * is_digit - confirms string has digits char
 * @s: string to be confirmed
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen -  length of  string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * errors - checks errors in  main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}


/**
 * main - product of two positive numbers
 * @argc: amounnt of  arguments
 * @argv: array of arguments
 * Return: 0 (Success)
**/

int main(int argc, char *argv[])
{
	char *a, *b;
	int msure1, msure2, msure, c, carry, no1, no2, *product, d = 0;

	a = argv[1], b = argv[2];
	if (argc != 3 || !is_digit(a) || !is_digit(b))
		errors();
	msure1 = _strlen(a);
	msure2 = _strlen(b);
	msure = msure1 + msure2 + 1;
	product = malloc(sizeof(int) * msure);
	if (!product)
		return (1);
	for (c = 0; c <= msure1 + msure2; c++)
		product[c] = 0;
	for (msure1 = msure1 - 1; msure1 >= 0; msure1--)
	{
		no1 = a[msure1] - '0';
		carry = 0;
		for (msure2 = _strlen(b) - 1; msure2 >= 0; msure2--)
		{
			no2 = b[msure2] - '0';
			carry += product[msure1 + msure2 + 1] + (no1 * no2);
			product[msure1 + msure2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			product[msure1 + msure2 + 1] += carry;
	}
	for (c = 0; c < msure - 1; c++)
	{
		if (product[d])
			d = 1;
		if (d)
			_putchar(product[d] + '0');
	}
	if (!d)
		_putchar('0');
	_putchar('\n');
	free(product);
	return (0);
}

