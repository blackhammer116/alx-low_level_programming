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
	if (n == 0)
		return (0);
	va_list ag;
	va_start (ag, n);
	int sum = 0, i;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ag, int);
	}
	va_end(ag);
	return (sum);

}
