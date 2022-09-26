#include "main.h"
/**
 *_memcpy - copies a memory set into another array
 * @dest: the array that holds the copy
 * @src: the array that gets copied
 * @n: the size/constraint
 * Return: the first parameter after it gets copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
