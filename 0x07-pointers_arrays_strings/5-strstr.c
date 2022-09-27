#include "main.h"
/**
 * _strstr - basicaly finds a needle in a haystack
 * @haystack: cross reference
 * @needle: string that gets searched
 * Return: NULL if non are found and the string in the variable
 * haystack if found.
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
		return (haystack + a);
		}
		a++;
	}
	return ('\0');
}
