#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
typedef void (*printer_f)(va_list *ap)
{
	va_list args;
	char *s;
	char c;
	int i;
	float f;
	int first = 1;
	const char *p;

	va_start (args, format);
	p = format;
	
	while (p && *p)
	{
		if (!first)
		printf (", ");

		if (*p == 'c' || *p == 'i' || *p == 'f' || *p == 's')
		{
			if (*p == 'c')
			{
				c = (char)va_arg(args, int);
				printf("%c", c);
			}
			if (*p == 'i')
		}
		i = va_arg(args, int);
		printf("%d", i);
	}
	if (*p == 'f')
	{
		f = (float)va_arg(args, double);
		printf("%f", f);
	}
	if (*p == 's')
	{
		s = va_arg(args, char *)
		printf("%s", s ? s : "(nil)");
	}
		first = 0;
	}
	p++;
}
va_end(args);
printf("\n");	
}