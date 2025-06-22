#include "main.h"
#include <stdio.h>
/**
 * _abs - Calcule la valeur absolue d'un entier
 * @a: L'entier dont on veut obtenir la valeur absolue
 *
 * Return: La valeur absolue de l'entier passé en argument
 */
int _abs(int a)

{
	if (a < 0)
	return (-a);

	return (a);
}
