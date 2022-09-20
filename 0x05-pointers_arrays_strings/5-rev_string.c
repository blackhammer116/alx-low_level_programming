#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *rev_string - prints string in reverse order
 *@s: is the parameter to be passed
 */
void rev_string(char *s)
{
	int i = 0;
	int j = strlen(s);
	int k = 0;
	char rev[100000];

	i = strlen(s);
	for (i -= 1; i >= 0; i--)
	{
		if (j - 1 != k)
			rev[k] = s[i];
		k++;
	}
	for (i = 0; i <= j; i++)
	{
		if (rev[i] == 0)
			break;
		s[i] = rev[i];
	}
}
