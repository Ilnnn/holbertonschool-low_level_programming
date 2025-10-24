#include "main.h"
/**
 * print_alphabet_x10 - imprime 10 fois l'alphabet en minuscules,
 * suivi d'un saut de ligne après chaque alphabet.
 *
 * Return: rien
 */
void print_alphabet_x10(void)
{
	int alph;

	for (alph = 0; alph < 10; alph++)
	{
		char blph;

		for (blph = 'a'; blph <= 'z'; blph++)
		{
			_putchar(blph);
		}
			_putchar('\n');
	}
}
