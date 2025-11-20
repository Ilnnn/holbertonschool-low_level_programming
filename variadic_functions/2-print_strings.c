#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* print_strings - prints n strings separated by separator
* @separator: string to print between elements (can be NULL)
* @n: number of strings
* ...: strings to print
*
* Prints each string or "(nil)" if NULL, followed by newline.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	i = 0;
	while (i < n)
	{
		str = va_arg(args, char*);

		if (str == NULL)
		printf("(nil)");

		else
		printf("%s", str);

		if (separator != NULL && i < n - 1)
		printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
