#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - affiche le dernier chiffre dun nombre
 * @r: le nombre àtraiter
 *
 * Return: la valeur du dernier chiffre
 */
int print_last_digit(int r)
{
	int last_digit;

	last_digit = r % 10;

	if (last_digit < 0)

	last_digit = -last_digit;
	_putchar(last_digit);

	return (last_digit);
}
