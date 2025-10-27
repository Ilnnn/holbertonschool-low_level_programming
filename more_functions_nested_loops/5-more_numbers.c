#include "main.h"
#include <stdio.h>
/**
 * more_numbers - function
 *
 */

	void more_numbers(void)
{
	int d;
	int u;

	for (d = 0; d < 10; d++)
	{
		for (u = 0; u <= 14; u++)
		{
			if (u >= 10)
			_putchar('0' + u / 10);
			_putchar('0' + u % 10);
		}
			_putchar('\n');
	}
}
