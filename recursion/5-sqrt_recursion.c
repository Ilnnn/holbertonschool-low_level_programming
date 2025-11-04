#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - Retourne la racine carrée naturelle d'un entier
 * @n: Nombre à tester
 *
 * Return: Racine carrée de n, ou -1 si n n'a pas de racine naturelle
 */
int _sqrt_seconde(int n, int guess);

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);

	return (_sqrt_seconde(n, 0));
}
/**
 * _sqrt_seconde - Fonction helper récursive pour tester les candidats
 * @n: Nombre à tester
 * @guess: Candidat pour la racine carrée
 *
 * Return: Racine carrée de n, ou -1 si elle n'existe pas
 */
int	_sqrt_seconde(int n, int guess)
{
	if (guess * guess == n)
	return (guess);

	if (guess * guess > n)
	return (-1);

	return (_sqrt_seconde(n, guess + 1));
}
