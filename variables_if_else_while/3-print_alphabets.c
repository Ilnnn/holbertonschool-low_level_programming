#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the lowercase and uppercase alphabet using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	putchar (low);

	for (low = 'A'; low <= 'Z'; low++)
	putchar (low);
	putchar ('\n');

	return (0);

}
