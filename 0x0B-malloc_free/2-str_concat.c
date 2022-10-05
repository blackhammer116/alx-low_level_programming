#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - allocates memory and concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL if it fails the pointer a if success
 */
char *str_concat(char *s1, char *s2)
{
	int i = 1, j = 0;
	char *a, *b;

	b = strcat(s1, s2);
	while (b[i])
	{
		i++;
	}
	a = malloc((sizeof(char) * i) + 1);
	if (a == NULL)
		return (NULL);
	while (j < i)
	{
		a[j] = b[j];
		j++;
	}
	a[j] = '\0';
	return (a);
}
