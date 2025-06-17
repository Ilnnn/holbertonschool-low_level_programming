#include <stdio.h>

/**
 * main - Prints all hexadecimal numbers (base 16) in lowercase
 *
 * Description: Uses a loop to print digits 0–9 and letters a–f.
 * Only the putchar function is used (3 times total).
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char x;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(0 + n);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar ('\n');

	return (0);
}
