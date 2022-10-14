#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints specified numbers and their separator
 * @separator: parameter that defines the separator 
 * @int: parameter that defines how many numbers that gets printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(ap, n);

		while (i < n)
		{
			printf("%d", va_arg(ap, int));
			if (i != n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}	
			i++;
		}
		va_end(ap);
	}
	printf("\n");
}
