#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints the name passed into "name"
 * according to the second parameter
 * @name:string parameter
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
