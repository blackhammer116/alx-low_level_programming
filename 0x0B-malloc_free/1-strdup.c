#include "main.h"
#include <stdlib.h>
/**
 * _strdup - pointes to a string that has the same memory of the 
 * given parameter
 * @str: string parameter to be passed
 * Return: the string pointer a.
 */
char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *a;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	a = malloc((sizeof(char) * i) + 1);
	if  (a == NULL)
		return (NULL);
	while (j < i)
	{
		a[j] = str[j];
		j++;
	}
	a[j] = '\0';
	return (a);
}
