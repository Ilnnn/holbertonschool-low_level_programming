#include "main.h"
/**
 * print_last_digit - Affiche le dernier chiffre d'un entier
 * @x: L'entier dont on veut afficher le dernier chiffre
 *
 * Return: Le dernier chiffre de l'entier
 */
int print_last_digit(int x)

{
	int a;

	a = abs(x % 10);
	_putchar(a + '0');
	return (a);
}
