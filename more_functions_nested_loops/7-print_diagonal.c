#include "main.h"
/**
 * print_diagonal - Dessine une ligne diagonale dans le terminal
 * avec le caractère '\', selon le nombre donné.
 * @n: Nombre de fois que le caractère '\' doit être imprimé
 *
 * Return: Rien (void)
 */
void print_diagonal(int n)
{
	int l;
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (l = 0; l < i; l++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
