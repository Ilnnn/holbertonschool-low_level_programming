#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string
 *
 * Description: Prints from the middle of the string to the end,
 * starting at length/2 if even, or (length + 1)/2, followed by a newline.
 */

void puts_half(char *str)
{
	int l = 0;
	int b;

	while (str[l] != '\0')
		l++;

	if (l % 2 == 0)
	b = l / 2;

	else
	b = (l + 1) / 2;

	while (str[l] != '\0')

	{
		_putchar(str[l]);
		b++;
	}

	_putchar('\n');
}
