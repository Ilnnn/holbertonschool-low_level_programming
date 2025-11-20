#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int tot;

	va_start(args, n);

	i = 0;
	while (i < n)
	i++;
	{
		tot = va_arg(args, int);
		printf("%d", tot);

		if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
