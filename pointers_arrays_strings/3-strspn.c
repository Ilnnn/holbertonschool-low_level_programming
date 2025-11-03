#include "main.h"
#include <stdio.h>
/**
 * _strspn - Calcule la longueur du préfixe initial d'une chaîne
 *            qui contient uniquement les caractères de accept
 * @s: Chaîne à analyser
 * @accept: Chaîne de caractères autorisés
 *
 * Return: Nombre de caractères au début de s présents dans accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;
	int f;

	while (s[i] != '\0')
	{
	f = 0;
	j = 0;

	while (accept[j] != '\0')
	{
	if (s[i] == accept[j])
	{
		f = 1;
		break;
	}
	j++;
	}
	if (f == 0)
	break;

	i++;
	}
	return (i);
}
