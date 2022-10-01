#include "main.h"
#include <string.h>
/**
 *_strncat - function appends the two strings in accordance with the third
 * parameter
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter which adds constraint
 * Return: dest the first pointer.
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
