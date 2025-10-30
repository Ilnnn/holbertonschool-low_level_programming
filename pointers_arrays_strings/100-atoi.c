#include "main.h"
#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if no numbers found
 */

int _atoi(char *s)
{
int a = 0;
int sign = 1;
unsigned int result = 0;
int start = 0;
	while (s[a] != '\0')
{
		if (s[a] == '-')
		sign = sign * -1;
		
		if (s[a] >= '0' && s[a] <= '9')
	{
	start = 1;
	result = result * 10 + (s[a] - '0');
	}
		else if (start)
		break;
		a++;
}
	return (result *sign);
}