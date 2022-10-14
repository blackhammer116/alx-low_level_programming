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
	char *str;
	
	va_start(ap, format);
	while (format != NULL && j < 1)
	{
		while (format[i] != '\0')
		{
			if (format[i] == 'c')
			{
				printf("%c", va_arg(ap, int));
			}
			else if (format[i] == 'i')
			{
				printf("%d", va_arg(ap, int));
			}
			else if(format[i] == 'f')
			{
				printf("%f", va_arg(ap, double));
			}
			else if(format[i] == 's')
			{
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
			}
			else
			{
				i++;
				j++;
			}
			j++;
			if (format[i + 1] == '\0')
				break;
			printf(", ");
			i++;
		}
	}
	va_end(ap);
	printf("\n");
}
