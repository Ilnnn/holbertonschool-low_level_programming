#include <stdio.h>

/**
 * main - print base sixteen
 *
 * return (0)
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
