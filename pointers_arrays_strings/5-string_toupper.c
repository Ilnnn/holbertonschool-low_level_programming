#include "main.h"
#include <stdio.h>
char *string_toupper(char *chaine)
{
	int i = 0;

	while (chaine[i] != '\0')
	{
		if (chaine[i] >= 'a' && chaine[i] <= 'z')
		{
			chaine[i] = chaine[i] - 32;
		}
		i++;
	}
	return (chaine);
}