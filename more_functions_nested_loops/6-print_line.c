#include "main.h"
#include <stdio.h>
/**
 * print_line - function
 * @n: variable
 */
	void print_line(int n)
{
		int l;

		if (n <= 0)
		{
			_putchar('\n');
			return;
		}
		for (l = 0; l < n; l++)
		{
			_putchar('_');
		}
			_putchar('\n');
}
