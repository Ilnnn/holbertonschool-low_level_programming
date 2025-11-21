#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_char - affiche un caractère depuis une va_list
 * @list: va_list contenant le caractère à afficher
 */
void print_char(va_list list)

{
	char c = va_arg(list, int);
	printf("%c", c);
}
/**
 * print_int - affiche un entier depuis une va_list
 * @list: va_list contenant l'entier à afficher
 */

void print_int(va_list list)
{
	int i = va_arg(list, int);
	printf("%i", i);
}
/**
 * print_float - affiche un flottant depuis une va_list
 * @list: va_list contenant le flottant à afficher
 */

void print_float(va_list list)
{
	float f = va_arg(list, double);
	printf("%f", f);
}
/**
 * print_string - affiche une chaîne de caractères depuis une va_list
 * @list: va_list contenant la chaîne à afficher
 *
 * Affiche "(nil)" si la chaîne est NULL
 */

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
/**
 * print_all - affiche une série d'arguments selon une chaîne de format
 * @format: chaîne contenant les caractères de format ('c', 'i', 'f', 's')
 *
 * Description : 
 *  - 'c' = char
 *  - 'i' = entier
 *  - 'f' = flottant
 *  - 's' = chaîne
 * Tout autre caractère est ignoré.
 * Les arguments sont séparés par ", ".
 */
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
	/* parcours de la chaîne de format */
	while (format && format[i] != '\0')
	{
	j = 0;
			/* vérification de tous les types supportés */
	while (type[j].type != 0)
	{
	if (type[j].type == format[i])
		{
							/* afficher le séparateur si nécessaire */
			printf("%s", separator);
							/* appeler la fonction correspondant au type */
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