#include "main.h"
/**
 * _strspn - checks every character in the pointer accept if its in the
 * pointer s.
 * @s: the string used for cross reference
 * @accept: characters to be checked
 * Return: The unsigned variable c
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n, i, c = 0;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == ' ')
			break;
		for (n = 0; accept[n] != 0; n++)
		{
			if (s[i] == accept[n])
				c++;
		}
	}
	return (c);
}
