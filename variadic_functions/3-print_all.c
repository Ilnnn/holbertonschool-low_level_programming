#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
   va_list args;
   char c;
   int i;
   int first = 1;
   const char *p;

	va_start(args, format);
	p = format;

	while (p && *p)
{
    if (!first)
	{
		printf(", ");
	}

	if (*p == 'c' || *p == 'i')
	{
	
		if (*p == 'c')
    
		{
			c = (char)va_arg(args, int);
			printf("%c", c);
        }

        if (*p == 'i')

		{
		i = va_arg(args, int);
		printf("%d", i);
		}
			first = 0;
	}
			p++;
}
	
	va_end(args);
	printf("\n");
}
