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
			switch(format[i])
			{
				case 'c':
					printf("%c", va_arg(ap, int));
					break;
				case 'i':
					printf("%d", va_arg(ap, int));
					break;
				case 'f':
					printf("%f", va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s", str);
					break;
				default:
					i++;
					j++;
					continue;
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
