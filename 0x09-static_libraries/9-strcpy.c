#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strcpy - copies from one pointer into another buffer
 *@dest: the parameter that becomes the copy
 *@src: the parameter that gets copied
 *Return: the first parameter
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
