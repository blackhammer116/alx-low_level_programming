#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints everything you want
 * @format: format of the thing getting printed
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j = 0;
	char *separator = "";

	f_dt f2[] = {
		{"c", CHAR},
		{"i", INT},
		{"f", FLOAT},
		{"s", STR}
	};
	va_start(ap, format);
	while (format != NULL && format[i])
	{
		while (j < 4)
		{
			if (format[i] == *f2[j].identifier)
			{
				f2[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
/**
 * CHAR - prints char
 * @separator: separator
 * @ap: second parameter
 */
void CHAR(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}
/**
 * INT - prints int
 * @separator: separator
 * @ap: second parameter
 */
void INT(char *separator, va_list ap)
{
	printf("%s%i", separator, va_arg(ap, int));
}
/**
 * FLOAT - prints float
 * @separator: separator
 * @ap: second parameter
 */
void FLOAT(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}
/**
 * STR - prints string
 * @separator: separator
 * @ap: second parameter
 */
void STR(char *separator, va_list ap)
{
	char *arg = va_arg(ap, char *);

	if (arg == NULL)
	{
		printf("%s(nil)", separator);
		return;
	}
	printf("%s%s", separator, arg);
}
