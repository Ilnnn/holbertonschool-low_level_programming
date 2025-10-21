#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, sn;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	sn = n % 10;
	if 
	printf ("The last digit of the number %d is %d \n", n, sn);

	return (0);
}
