#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args);

	i = 0;
	while(i < n)
	i++;
	{
		str = va_arg(args, char*);
	
		if (str == NULL)
		printf(("nil"));

		else
		printf("%s", str);

		if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}