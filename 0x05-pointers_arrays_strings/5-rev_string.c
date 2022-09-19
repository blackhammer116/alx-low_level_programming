#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *print_rev - prints string in reverse order
 *@s: is the parameter to be passed
 */
void rev_string(char *s)
{
	int i = 0;


	while (s[i] != '\0')
	{
		i++;
	}
	char d[i];

	for (i -= 1; i >= 0; i--)
	{
		d[i] = s[i];
	}
	putchar('\n');
}
