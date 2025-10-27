#include "main.h"
#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 *
 * Description: For multiples of three, prints "Fizz" instead of the number.
 *              For multiples of five, prints "Buzz" instead of the number.
 *              For numbers which are multiples of both three and five, prints "FizzBuzz".
 *              Each number or word is separated by a space.
 *
 * Return: 0 on success.
 */

int main(void)
{
	int f;

	for (f = 1; f < 100; f++)
	{
		if (f % 3 == 0 && f % 5 == 0)
		{
			printf("FizzBuzz");
		}
			else if (f % 3 == 0)
			{
				printf("Fizz");
			}

				else if (f % 5 == 0)
				{
					printf("Buzz");
				}
					else
					{
						printf("%d", f);
					}

					if (f < 100)
					printf(" ");
	}
					printf("\n");
					return (0);
}
