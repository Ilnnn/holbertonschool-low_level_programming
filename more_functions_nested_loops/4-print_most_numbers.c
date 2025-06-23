#include "main.h"
/**
 * print_most_numbers - Affiche les chiffres de 0 à 9,
 * sauf 2 et 4, suivis saut de ligne.
 * Return: Rien (void).
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		n++;

		_putchar(n + '0');
	}

	_putchar('\n');
}
