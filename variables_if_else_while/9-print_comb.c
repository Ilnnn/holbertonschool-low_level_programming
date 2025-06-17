#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9 with commas and spaces
 *
 * Description: Prints numbers 0 to 9 separated by ", ",
 * except after the last number. Uses only putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar('0' + x);
		if (x < 9)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
	return (0);
}
