#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the last digit of a random number
 * and tells if it is greater than 5, equal to 0, or less than 6 and not 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, sn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	sn = n % 10;
	printf("Last digit of %d is %d ", n, sn);

	if (sn > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (sn == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0 \n");
	}
	return (0);
}
