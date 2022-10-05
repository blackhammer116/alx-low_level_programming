#include "main.h"
#include <stdlib.h>
/**
 * str_concat - allocates memory and concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL if it fails the pointer a if success
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, k = 0, l = 0, j = 0;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
	{
		j++;
	}
	l = i + j;
	a = malloc((sizeof(char) * l) + 1);
	if (a == NULL)
		return (NULL);
	j = 0;
	while (k < l)
	{
		if (k <= i)
			a[k] = s1[k];
		if (k >= i)
		{
			a[k] = s2[j];
			j++;
		}
		k++;
	}
	a[k] = '\0';
	return (a);
}
