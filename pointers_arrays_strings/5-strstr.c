#include "main.h"
#include <stdio.h>
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
