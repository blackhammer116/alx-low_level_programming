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
	unsigned int n, i, c;

	for (i = 0; 1 ; i++)
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
