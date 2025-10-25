#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
int ord;
int abs;
int p;

	for (ord = 0; ord < 10; ord++)
		{
			for (abs = 0; abs < 10; abs++)
	{
		p = ord * abs;
		if (abs == 0)
	{
		if (p < 10)
		_putchar(p + '0');
	else
		{
			_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
		}
	}
	else
	{
		if (p < 10)
		{
			_putchar(' ');
			_putchar(p + '0');
		}
	else
		{
			_putchar(' ');
			_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
		}
	}
		if (abs < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
		_putchar('\n');	
		}
}
