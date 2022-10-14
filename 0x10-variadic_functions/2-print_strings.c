#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_strings - prints strings int the variadic functions
 * @separator: character separator
 * @n: string counter
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	
	va_list ap;
	if (n > 0)
	{
		va_start(ap, n);
		while (i < n)
		{
			str = va_arg(ap, char *);
			if (str == NULL)
				printf("%s","(nil)");
			else
				printf("%s", str);
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(ap);
	}
	printf("\n");
}
