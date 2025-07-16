#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - returns the sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of a / b
 *
 * Note: If b is 0, this function may cause a division by zero error.
 * Ensure proper validation before calling this function.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of a % b
 *
 * Note: If b is 0, this function may cause a modulo by zero error.
 * Ensure proper validation before calling this function.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
