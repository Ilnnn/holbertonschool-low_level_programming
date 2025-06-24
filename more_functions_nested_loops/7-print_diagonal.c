#include "main.h"
void print_diagonal(int n)
{
	int l;
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (l = 0; l < i; l++)
			{		
				_putchar(' ');	
			}	
			_putchar('\\');
			_putchar('\n');
		}
	}
}
