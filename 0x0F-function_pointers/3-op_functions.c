#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of two numbers.
 * @a: first input.
 * @b:  second input
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - Returns difference of two numbers.
 * @a: first input
 * @b: second input
 *
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns result of two numbers multiplied
 * @a: first input
 * @b: second input
 *
 * Return: The result of a and b multiplied.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns result two numbers divided
 * @a: first input
 * @b: second input
 *
 * Return: The result of a and b divided.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder after  division of two numbers.
 * @a: The first input.
 * @b: The second input
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

