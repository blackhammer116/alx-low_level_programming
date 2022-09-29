#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - calculates the natuarl square root of a
 *  number
 *  _natural_sqrt: function that calculates the natural sqrt
 *  @n: passed parmeter
 *  @i: iterating parameter
 *  @n: int parameter
 *  Return: returns the recursive function that will
 *  then calculate the natural square root
 */
int _natural_sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (_natural_sqrt(n, 1));
}
/**
 * _natural_sqrt - the recursive function that calculates
 * the natural square root of a function
 * @n: the number passed from the first function
 * @i: the number that gets iterated and checked for
 * the answer.
 * Return: the natural sqrt
 */
int _natural_sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_natural_sqrt(n, i + 1));
}
