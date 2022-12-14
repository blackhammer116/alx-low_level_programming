#include "main.h"
/**
 * _strlen_recursion - functions that computes the string length of
 * a givin string
 * @s: string parameter
 * Return: the string length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
