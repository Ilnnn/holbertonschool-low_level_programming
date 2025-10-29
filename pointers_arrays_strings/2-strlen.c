#include "main.h"
#include <stdio.h>
/**
 * _strlen - retourne la longueur d'une chaîne de caractères
 * @s: pointeur vers la chaîne dont on veut connaître la longueur
 *
 * Description: Cette fonction parcourt la chaîne pointée par @s
 * caractère par caractère jusqu'au caractère nul ('\0'), et renvoie
 * le nombre total de caractères avant celui-ci.
 *
 * Return: la longueur de la chaîne (nombre de caractères)
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
