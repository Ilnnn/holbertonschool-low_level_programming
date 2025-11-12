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

	if (i >= len2)
	i = len2;

	tab = malloc(len1 + i + 1);
	if (malloc == NULL)
	return (NULL);

	s1 = s1[*tab];
	s2 = s2[*tab];

	return (tab);
}