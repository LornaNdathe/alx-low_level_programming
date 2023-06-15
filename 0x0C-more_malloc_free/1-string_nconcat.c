#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenate two strings
 * @s1: string to adjoin
 * @s2: string to concatenate from
 * @n: number of bytes to concatenate from s2 to s1
 *
 * Return: adress of string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, amount1 = 0, amount2 = 0;
	char *m;

	while (s1 && s1[amount1])
		amount1++;
	while (s2 && s2[amount2])
		amount2++;

	if (n < amount2)
		m = malloc(sizeof(char) * (amount1 + n + 1));
	else
		m = malloc(sizeof(char) * (amount1 + amount2 + 1));

	if (!m)
		return (NULL);

	while (a < amount1)
	{
		m[a] = s1[a];
		a++;
	}

	while (n < amount2 && a < (amount1 + n))
		m[a++] = s2[b++];

	while (n >= amount2 && a < (amount1 + amount2))
		m[a++] = s2[b++];

	m[a] = '\0';

	return (m);
}

