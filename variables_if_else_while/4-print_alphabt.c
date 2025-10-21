#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
	return (0);
}
