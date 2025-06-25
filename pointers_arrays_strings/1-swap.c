#include "main.h"
#include <stdio.h>
/**
 * swap_int - Échange les valeurs de deux entiers
 * @a: Pointeur vers le premier entier
 * @b: Pointeur vers le second entier
 *
 * Description: Utilise une variable temporaire pour échanger
 * la valeur de deux entiers passés par adresse.
 *
 * Return: Rien (void)
 */
void swap_int(int *a, int *b)

	{
		int temp;

		temp = *a;
		*a = *b;
		*b = temp;
	}


