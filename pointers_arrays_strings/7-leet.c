#include "main.h"
#include <stdio.h>
/**
 * leet - Encodes a string into 1337
 * @str: The string to encode
 *
 * Description: Replaces the letters a, e, o, t, and l
 * with the numbers 4, 3, 0, 7, and 1 respectively.
 * Works for both uppercase and lowercase letters.
 *
 * Return: Pointer to the modified string
 */
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
