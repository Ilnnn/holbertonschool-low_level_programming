#include "variadic_functions.h"
#include <stdio.h>

void print_char(va_list list)

{
	char c = va_arg(list, int);
	printf("%c", c);
}

void print_int(va_list list)
{
	int i = va_arg(list, int);
	printf("%i", i);
}

void print_float(va_list list)
{
	float f = va_arg(list, double);
	printf("%f", f);
}

void print_string(va_list list)
{

char *s = va_arg(list, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;
	char *separator = "";
	va_list list;

	type_txt_t type[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string},
	{0, NULL},
						};

	va_start(list, format);

	while (format && format[i] != '\0')
	{
	j = 0;
	while (type[j].type != 0)
	{
	if (type[j].type == format[i])
		{
			printf("%s", separator);
			type[j].print(list);
			separator = ", ";
		}
		j++;
	}
		i++;
	}

va_end(list);
printf("\n");
}