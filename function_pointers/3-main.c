#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"
int main(int argc, char *argv[])
{
	int n1;
	int n2;
	int summ;
	int (*function_pointers)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	function_pointers = get_op_func(argv[2]);

	if (function_pointers == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if (((argv[2][0] == '/' && argv[2][1] == '\0') ||

		(argv[2][0] == '%' && argv[2][1] == '\0')) &&
		n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	summ = function_pointers(n1, n2);

	printf("%d\n", summ);
	return (0);
}
