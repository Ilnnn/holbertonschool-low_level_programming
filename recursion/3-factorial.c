#include "main.h"
#include <stdio.h>
/**
 * factorial - Retourne le factoriel d'un entier
 * @n: Nombre à calculer
 *
 * Return: Factoriel de n, ou -1 si n est négatif
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n == 0)
	return (1);

	return (n * factorial(n - 1));
}
