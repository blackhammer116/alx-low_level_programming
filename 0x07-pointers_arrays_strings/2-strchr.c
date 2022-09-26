#include "main.h"
/**
 *_strchr - checks if the character pointed by c is inside
 * the string pointed by s and returns the string after the
 *  occurence of that letter
 * @s: string that gets checked
 * @c: character that gets checked
 * Return: null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; 1 ; i++)
	{
		if (s[i] == c)
			return (s + i);
		if (s[i] == 0)
			break;
	}
	return (NULL);
}
