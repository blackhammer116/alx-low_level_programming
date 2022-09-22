#include "main.h"
/**
 *leet - function convertes a string into leet code
 * @s: string parameter
 * Return: s the string parameter
 */
char *leet(char *s)
{
	int x, i;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; x < 10; x++)
		{
			if (s[i] == a[x])
			{
				s[i] = b[x];
			}
		}
	}
	return (s);
}
