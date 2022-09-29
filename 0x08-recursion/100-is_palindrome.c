#include "main.h"

int check_palindrome(char *s);
/**
 * is_palindrome - main function tha determines the type of the string
 * @s: passed string
 * Return: returns the check_palindrome function
 */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);
	return (check_palindrome(s));
}
/**
 * check_palindrome - checks if passed string is palindrome or not
 * @s: string passed
 * Return: 1 if its palindrome 0 if not
 */
int check_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
		return (0);
	return (1);
}
/**
 * _strlen_recursion - determines the length of the string 
 * passed
 * @s: string parameter
 * Return: returns the string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
