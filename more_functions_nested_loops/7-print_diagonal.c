#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character '\' should be printed
 *
 * Description: Prints a diagonal line using the '\' character.
 *              The line has n lines, each starting with an increasing
 *              number of spaces to form the diagonal. Each line ends
 *              with a newline character. If n is 0 or less, only
 *              prints a newline.
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

		for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
			_putchar('\\');
			_putchar('\n');

	}
}
