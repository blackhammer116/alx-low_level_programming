#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *print_rev - prints string in reverse order
 *@s: is the parameter to be passed
 */
void print_rev(char *s)
{
	strrev(s);
	puts(s);
}
