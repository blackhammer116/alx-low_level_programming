#include <unistd.h>
/**
 * _putchar - prints a character of a string
 * @c: character parameter
 * Return: returns the character 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
