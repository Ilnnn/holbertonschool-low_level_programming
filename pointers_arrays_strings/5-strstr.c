#include "main.h"
#include <stdio.h>
/**
 * _strstr - Localise la prems occurrence d'une sous-chaîne dans une chaîne
 * @haystack: Chaîne principale dans laquelle chercher
 * @needle: Sous-chaîne à rechercher
 *
 * Return: Pointe vers le début de la sous-chaîne trouvée, NULL si absente
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j = 0;

	if (needle[0] == '\0')
	return (haystack);

	i = 0;

	while (haystack[i] != '\0')
	{
	j = 0;

	while (needle[j] != '\0' && haystack[i + j] == needle[j])
	j++;

	if (needle[j] == '\0')
	return (haystack + i);

	i++;
	}
	return (NULL);

}
