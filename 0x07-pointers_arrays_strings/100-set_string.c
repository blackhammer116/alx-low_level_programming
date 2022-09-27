#include "main.h"
#include <stdio.h>
/**
 * set_string - sets the pointer s into char
 * @s: pointer to a pointer
 * @to: pointer
 */
void set_string(char **s, char *to)
{
	*s= to;
}
