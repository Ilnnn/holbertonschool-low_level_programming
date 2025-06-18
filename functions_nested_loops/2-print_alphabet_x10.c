#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_alphabet_x10(void)

{
	char ch;
	int p;

	p = 0;
	
	while (p < 9)
{
	
	ch = 'a';
	while (ch <= 'z') 
{
	_putchar(ch);
	ch++;
}
	_putchar('\n');
	p++;
}
}

