#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search in
 * @accept: The string containing the bytes to match
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	{
		int se, a;

		for (se = 0; s[se] != '\0'; se++)
		{
			for (a = 0; accept[a] != '\0'; a++)

			{
				if (s[se] == a[accept])
				return (s + se);
			}
		}
	}
	return (NULL);
}
