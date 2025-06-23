#include "main.h"
#include <stdio.h>
/**
 * more_numbers - Affiche 10 fois les nombres de 0 à 14,
 * suivis d’un saut de ligne à chaque ligne.
 *
 * Return: Rien (void).
 */
void more_numbers(void)
{
	int a;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
