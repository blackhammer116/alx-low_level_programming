#include "main.h"
/**
 * _pow_recursion - calculates power of given number
 * with base and exponent
 * @x: base number
 * @y: exponent
 * Return: if y < 0, -1 as an error else the power of the
 * numbers
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
