#include "main.h"
#include <stdio.h>
unsigned int _strspn(char *s, char *accept)
{
	unsigned int sa, a, count = 0;

	for (sa = 0; s[sa] != '\0'; sa++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[sa] == accept[a])
			{
				count++;
				break;
			}
		}
		if ( accept[a] == '\0')
		break;
	}
	return (count);
}
