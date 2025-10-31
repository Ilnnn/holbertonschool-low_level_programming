#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word
 * @str: String to modify
 *
 * Return: Pointer to modified string
 */
char *cap_string(char *str)
{
	int i = 0;
	size_t j;
	int is_spe;
	char spe[] = {' ', '\t', '\n', ',', ';', '.', '!',
		      '?', '"', '(', ')', '{', '}'};

	while (str[i] != '\0')
	{
		is_spe = 0;

		if (i != 0)
		{
			j = 0;
			while (j < (sizeof(spe) / sizeof(spe[0])))
			{
				if (str[i - 1] == spe[j])
				{
					is_spe = 1;
					break;
				}
				j++;
			}
		}

		if ((i == 0 && str[i] >= 'a' && str[i] <= 'z') ||
		    (i != 0 && is_spe && str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= ('a' - 'A');
		}

		i++;
	}

	return (str);
}
