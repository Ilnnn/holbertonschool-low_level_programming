#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Localise le prem caractère dans qui est présent dans accept
 * @s: Chaîne à analyser
 * @accept: Chaîne de caractères à rechercher
 *
 * Return: Pointeur vers le premier caractère trouvé dans s, ou NULL si aucun
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			return (s + i);
			j++;
		}

		i++;
	}
	return (NULL);
}
