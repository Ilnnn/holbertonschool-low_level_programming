#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to the string to be measured.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)

{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
