#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - Retourne la longueur d'une chaîne de caractères
 * @s: Pointeur vers la chaîne
 *
 * Return: Longueur de la chaîne (int)
 */
int _strlen(char *s)
{

		int length = 0;

		while (s[length] != '\0')
	{
		length++;
	}
		return (length);
}
