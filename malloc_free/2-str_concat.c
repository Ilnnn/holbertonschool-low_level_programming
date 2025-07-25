#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Concatène deux chaînes de car dnouvelle zone mém
 * @s1: Première chaîne de caractèr(peut être NULL
 * @s2: Deuxième chaîne de caractères ut être NULL
 *
 * Return: Pointeur vers la nouvelle chaîne concaténé
 *ou NULL si l'allocation échoue.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	l = i + j;
	s = malloc((sizeof(char) * l) + 1);

	if (s == NULL)
		return (NULL);
	j = 0;

	while (k < l)
	{
		if (k <= i)
			s[k] = s1[k];

		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}

		k++;
	}

	s[k] = '\0';
	return (s);
}
