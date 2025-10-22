#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse order using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphrev;

	alphrev = 'z';

	while (alphrev >= 'a')
	{
		putchar(alphrev);
		alphrev--;
	}
	putchar('\n');
	return (0);
}
