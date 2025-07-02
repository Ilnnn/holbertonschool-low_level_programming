#include "main.h"
#include <stdio.h>
/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be scanned
 * @accept: The string containing the characters to match
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int sa, a, count = 0;

	for (sa = 0; s[sa] != '\0'; sa++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[sa] == accept[a])
			{
				count++;
				break;
			}
		}
		if (accept[a] == '\0')
		break;
	}
	return (count);
}
