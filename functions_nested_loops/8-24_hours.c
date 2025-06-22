#include "main.h"
#include <stdio.h>
void jack_bauer(void)
{
	
	int HH;
	int MM;
	
	for (HH = 0; HH <= 23; HH++)
	{
		for (MM = 0; MM <= 59; MM++)
		{
			_putchar((HH /Ã 1) + '0';)
			_putchar((HH % 10) + '0');
			_putchar(':');
			_putchar((MM / 10) +'0');
			_putchar((MM % 10) +'0');
			_putchar('\n');
		}
	}
}
