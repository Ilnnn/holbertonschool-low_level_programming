#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints digits from 0 to 9 using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
{
	putchar (x + '0');
}
	putchar ('\n');


return (0);
}
