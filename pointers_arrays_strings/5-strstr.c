#include "main.h"
#include <stdio.h>
/**
 * _strstr - Locates a substring
 * @haystack: The string to search in
 * @needle: The substring to find
 *
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int h, n;

	for (h = 0; h[haystack] != '\0'; h++)
	{
		for (n = 0; n[needle] != '\0'; n++)
		{
			if (haystack[h + n] != needle[n])
			break;
		}
		if (needle[n] == '\0')
		{
			return (haystack + h);
		}
	}
	return (NULL);
}
