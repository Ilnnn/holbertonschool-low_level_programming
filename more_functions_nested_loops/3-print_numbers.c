#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Affiche les chiffres de 0 à 9 suivis d’un saut de ligne.
 *
 * Return: Rien (void).
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar (a);
	}
		_putchar ('\n');

}

