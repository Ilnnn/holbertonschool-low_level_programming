#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - Retourne x élevé à la puissance y
 * @x: Base
 * @y: Exposant
 *
 * Return: x^y, ou -1 si y est négatif
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);

	if (y == 0)
	return (1);

	else
	return (x * _pow_recursion(x, y - 1));
}
