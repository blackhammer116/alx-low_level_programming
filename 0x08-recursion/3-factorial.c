#include "main.h"
/**
 * factorial - calculates the factorial of any givin number
 * @n: int parameter
 * Return: -1 for error and the factorial if success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n < 1)
		return (1);
	return (n * factorial(n - 1));
}
