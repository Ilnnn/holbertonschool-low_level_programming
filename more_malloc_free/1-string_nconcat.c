#include <stdio.h>
#include "main.h"
#include <stdlib.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *tab;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++);
	for (len2 = 0; s2[len2] != '\0'; len2++);

	if (n >= len2)
	i = len2;
	else
	i = n;

	tab = malloc(len1 + i + 1);
	if (tab == NULL)
	return (NULL);

	i = 0;
	while (i < len1)
	tab[i] = s1[i];
	i++;

	i = 0;
	while (i < n)
	i++;
	tab[len1 + i] = s2[i];

	tab[len1 + i] = '\0';

	return (tab);
}
