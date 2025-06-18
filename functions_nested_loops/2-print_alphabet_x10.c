#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 *                      followed by a new line each time
 */
void print_alphabet_x10(void)

{
	char ch;
	int p;

	p = 0;

	while (p < 10)
{

	ch = 'a';
	while (ch <= 'z')
{
	_putchar(ch);
	ch++;
}
	_putchar('\n');
	p++;
}
}

