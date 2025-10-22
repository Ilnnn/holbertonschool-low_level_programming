#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Affiche tous les chiffres en base 16 (hexadécimaux)
 *              en utilisant uniquement la fonction putchar.
 *              Les chiffres sont affichés en minuscules, de 0 à f.
 *
 * Return: Always 0 (Success)
 */
	int main(void)
{
	int coma;

	for (coma = 0; coma <= 9; coma++)

	{
	putchar (coma + '0');

	if (coma != 9)

	{
		putchar (',');
		putchar (' ');
	}
	}
	putchar('\n');
	return (0);
}
