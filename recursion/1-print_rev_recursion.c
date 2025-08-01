#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - Prints a string in reverse, followed by a new line.
 * @s: String to print in reverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
