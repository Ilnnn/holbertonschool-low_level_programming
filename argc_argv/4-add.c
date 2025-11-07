#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - additionne les nombres positifs passés en arguments
 * @argc: nombre d'arguments
 * @argv: tableau d'arguments
 * Return: 0 si succès, 1 en cas d’erreur
 */
int main(int argc, char *argv[])
{
int i;
int j;
int sum = 0;

		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
		{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			sum += atoi(argv[i]);
		}
			printf("%d\n", sum);
		}

		return (0);
}
