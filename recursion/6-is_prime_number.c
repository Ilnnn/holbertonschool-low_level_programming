#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - Vérifie si un nombre est premier
 * @n: Nombre à tester
 *
 * Return: 1 si n est premier, 0 sinon
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
	return (0);

	i = 2;

	while (i < n)
	{
		if (n % i == 0)
		return (0);
		i++;
	}
	return (1);
}
