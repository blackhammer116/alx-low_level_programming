#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * sum_them_all - sums all the arguments passed
 * @n: first list parameter
 * Return: their sum if successful else 0
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		va_list ap;
		va_start(ap, n);
		int sum = 0;
		unsigned int i = 0;

		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, int);
		}
		va_end(ap);
		return (sum);
	}
	return (0);
}
