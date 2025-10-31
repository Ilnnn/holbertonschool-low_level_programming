#include "main.h"
#include <stdio.h>
char *leet(char *str)
{
	char l [] = {'A', 'E', 'O', 'T', 'L'};
	char n [] = {'4', '3', '0', '7', '1'};

	int i = 0;
	int j;

	while (str[i] != '\0')
	{
	j = 0;
	while (j < (int)(sizeof(l) / sizeof(l[0])))
	{
		if (str[i] == l[j] || str[i] == l[j] + 32)
	{
		str[i] = n[j];
		break;
			}
		j++;
		}
		i++;
	}
	return (str);
}