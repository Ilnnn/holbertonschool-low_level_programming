#include "main.h"
#include <stdio.h>
/**
 * _isupper - check if C is uppercase
 * @c: variable
 * Return: 1 if c is uppercase else return 0
 */
	int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
