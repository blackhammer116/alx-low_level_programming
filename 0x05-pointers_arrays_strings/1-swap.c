#include "main.h"
/**
 * swap_int - swaps two pointers
 * @a: first pointer
 * @b: second pointer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
