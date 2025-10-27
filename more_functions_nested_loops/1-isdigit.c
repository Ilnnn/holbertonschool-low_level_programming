#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check for a digit between 0 - 9
 * @c: variable
 * Return: 1 if digit between 0 - 9 else 0
 *
 */

int _isdigit(int c)

{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
