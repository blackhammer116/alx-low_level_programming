#include "main.h"
#include <ctype.h>
/**
 *_islower - checks if letter is lower case
 *int c - is parameter of function
 * Return - 1 if lower 0 if not
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
