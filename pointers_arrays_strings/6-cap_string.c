#include "main.h"
#include <stdio.h>
#include <stdbool.h>
char *cap_string(char *s)
{
	int i = 0;
	int j;
	char spe[] = {' ', '\t', '\n', ',', ';', '.',
'!', '?', '"', '(', ')', '{', '}'};
	int nw = 1;

	while (s[i] != '\0')
	{
		j = 0;
		while (spe[j] != '\0')
		{
			if (s[i] == spe[j])
		{
			nw = 1;
			break;
		}
		j++;
		}
			if (nw == 1 && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
			nw = 0;
		}

	i++;
	}
	return (s);
}