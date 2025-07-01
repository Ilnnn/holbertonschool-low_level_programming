#include "main.h"
#include <stdio.h>
char *_strstr(char *haystack, char *needle)
{
	{
		int h, n;
		
		for (h = 0; h[haystack]; != '\0'; h++)
		{
			for (n = 0; n[needle]; != '\0'; n++)

			{
				if (h[haystack] == n[needle])
				return (n + needle);
			}
		}
	}	return (NULL);
}	
