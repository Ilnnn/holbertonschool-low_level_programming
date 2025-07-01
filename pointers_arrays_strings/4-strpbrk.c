#include "main.h"
#include <stdio.h>
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
