#include "main.h"
#include <stdio.h>
/**
 * main - Programme FizzBuzz de 1 à 100
 *
 * Description: Affiche les nombres de 1 à 100.
 * Pour les multiples de 3, affiche "Fizz" à la place du nombre.
 * Pour les multiples de 5, affiche "Buzz".
 * Pour les multiples des deux, affiche "FizzBuzz".
 * Les valeurs sont séparées par un espace.
 *
 * Return: 0 (succès)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
	{
			printf("FizzBuzz");
	}
		else if	(i % 3 == 0)
	{
			printf("Fizz");
	}
		else if (i % 5 == 0)
	{
			printf("Buzz");
	}
		else
	{
			printf("%d", i);
	}
		if (i != 100)
	{
			printf(" ");
	}
	}
			printf("\n");
			return (0);
}
