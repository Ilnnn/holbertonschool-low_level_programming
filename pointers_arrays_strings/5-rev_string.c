#include "main.h"
#include <stdio.h>
/**
 * rev_string - inverse une chaîne de caractères
 * @s: pointeur vers la chaîne à inverser
 *
 * Description: Cette fonction calcule la longueur de la chaîne pointée
 * par @s, puis échange les caractères du début et de la fin un à un,
 * jusqua atteindre le milieu. La chaîne est ainsi invers� en mémore
*/
void rev_string(char *s)
{
	int i = 0;
	int p;
	char c;

	while (s[i] != '\0')
		i++;

	for (p = 0; p < i / 2; p++)
	{
		c = s[p];
		s[p] = s[i - p - 1];
		s[i - p - 1] = c;
	}
}
