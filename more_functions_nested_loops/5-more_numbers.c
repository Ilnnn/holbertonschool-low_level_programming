#include "main.h"
#include <stdio.h>
void more_numbers(void)
{
	int a;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
