#include "main.h"
/**
 *print_alphabet_x10 - prints 10x alphabet in lower case
 */
void print_alphabet_x10()
{
	int alpha;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	} 
}
