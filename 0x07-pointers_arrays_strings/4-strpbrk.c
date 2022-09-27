#include "main.h"
/**
 *_strpbrk - compares two strings and returns their common value
 * @s: string for cross reference.
 * @accept: string to be checked
 * Return: NULL if non are found , the common values
 * if found.
 */
char *_strpbrk(char *s, char *accept)
{
	int n, i;

	for (i = 0; s[i] != 0; i++)
	{
		for (n = 0; accept[n] != 0; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (NULL);
}
