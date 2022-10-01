#include "main.h"
/**
 *_memset - sets random memory to the pointer s
 * @s: pointer of array
 * @b: the value to be passed
 * @n: size/constraint
 * Return: the first pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
