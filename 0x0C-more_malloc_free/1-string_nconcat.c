#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings accordin to the parameter
 * passed by n
 * @s1: first string
 * @s2: second string
 * @n: constraint parameter
 * Return: NULL of fail the string s on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	if (n >= j)
	{
		l = i + j;
		s = malloc((sizeof(char) * l) + 1);
	}
	else
	{
		l = i + (n - 1);
		s = malloc((sizeof(char) * l) + 1);
	}
	if (s == NULL)
		return (NULL);
	j = 0;
	while (k < l)
	{
		if (k <= i)
		{
			s[k] = s1[k];
		}
		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
