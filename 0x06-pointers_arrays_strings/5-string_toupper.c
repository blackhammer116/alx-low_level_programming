#include "main.h"
#include <stdio.h>
/**
 *string_toupper - function convertes a string into upper case
 * @s: string parameter
 * Return: the upper case of the s parameter
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
}
