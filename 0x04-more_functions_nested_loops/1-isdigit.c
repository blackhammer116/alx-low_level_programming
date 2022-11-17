#include "main.h"
/**
 * _isdigit - checks if character is a digit
 * @c: character to be checked
 * Return: 1 if success 0 if fail
 */
int _isdigit(int c)
{
	if (c >= 48 || c <= 57)
		return (1);
	return (0);
}
