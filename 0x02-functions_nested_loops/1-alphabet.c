#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints alphabet in lower
 * Return: 0
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)	
		_putchar(alpha);
	_putchar('\n');
}
