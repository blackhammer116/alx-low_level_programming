#include "main.h"
#include <stdio.h>
/**
 * main - prints alphabet in lower
 * Return: 0
 */
void print_alphabet()
{
	for (char i = 'a'; i <= 'z'; i++){
		_putchar(i);
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
return (0);
}
