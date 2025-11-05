#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;

	(void)argv;
	count = (argc - 1);
	printf("%d\n", count);
	return (0);
}
