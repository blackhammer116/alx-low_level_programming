#include "main.h"
#include <string.h>
/**
 *_strncpy - function copies src onto dest with the constraints of n
 *@dest: first parameter
 *@src: second parameter
 *@n: constraint parameter
 *Return: returns first parameter after copying.
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
