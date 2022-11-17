#include "main.h"
/**
 * _isupper - checks if  a character is an upper case
 * @c: character to be checked
 * Return: 1 if its upper case, 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
