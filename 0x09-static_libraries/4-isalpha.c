#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks if character is in alphabet
 * @c: is the character to be cheked
 * Return: 1 if yes and 0 if not
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
