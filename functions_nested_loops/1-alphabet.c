#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 *
 * Description: Uses _putchar to print each character.
 * Only _putchar is allowed and used only twice (through a loop or string).
 *
 * Return: void
 */
void print_alphabet(void)

{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar (l);
	}
	{
		_putchar ('\n');
	}
}
