#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: The string to search in
 * @c: The character to find
 *
 * Return: A pointer to the first occurrence of c in s,
 * or NULL if c is not found
 */
char *_strchr(char *s, char c)
{
		int i;

		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == c)
			{
				return (&s[i]);
			}
		}

		if (c == '\0')
		{
			return (&s[i]);
		}


		return (NULL);

}
