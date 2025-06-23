#include "main.h"
/**
 * print_line - Dessine une ligne droite avec le caractère '_'.
 * @n: Nombre de fois que le caractère '_' doit être imprimé.
 *
 * Return: Rien (void).
 */
void print_line(int n)

{
	int l;

	if (n <= 0)
	{
		_putchar('\n');
	}

		else
	{
			for (l = 1; l <= n; l++)
			{

				_putchar('_');

			}

		_putchar('\n');
	}
}
