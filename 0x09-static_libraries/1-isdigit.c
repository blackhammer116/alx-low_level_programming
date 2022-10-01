#include "main.h"
/**
 * _isdigit - checks for digits
 * @c: int parameter
 * Return: 1 if it is 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return(1);
	else
		return(0);
}
