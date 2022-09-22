#include "main.h"
#include <string.h>
/**
 *_strcat - is the function that appends src onto dest.
 *@dest: is the first parameter.
 *@src: second parameter.
 *Return: the pointer dest.
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (*dest);
}
