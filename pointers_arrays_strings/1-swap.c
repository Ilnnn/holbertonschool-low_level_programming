#include "main.h"
#include <stdio.h>
/**
 * swap_int - échange les valeurs de deux entiers
 * @a: pointeur vers le premier entier
 * @b: pointeur vers le second entier
 *
 * Description: Cette fonction prend deux pointeurs vers des entiers
 * et échange leurs valeurs à l’aide d’une variable temporaire.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
