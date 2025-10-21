#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints lowercase then uppercase alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';
	char ALPHABET = 'Z';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}

	putchar('\n');
	return (0);
}
