#include <stdio.h>
#include <stdlib.h>

/**
 * main - opcodes to main function
 * @argc: count of arguments inputed
 * @argv: array
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bts, a;
	char *b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bts = atoi(argv[1]);

	if (bts < 0)
	{
		printf("Error\n");
		exit(2);
	}

	b = (char *)main;

	for (a = 0; a < bts; a++)
	{
		if (a == bts - 1)
		{
			printf("%02hhx\n", b[a]);
			break;
		}
		printf("%02hhx ", b[a]);
	}
	return (0);
}

