#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - reserves memory address with the size of
 * b
 * @b: parameter that consistes a size
 */
void *malloc_checked(unsigned int b)
{
	int *C;

	C = malloc(b);
	if (C == NULL)
		exit(98);
	return (C);
}
