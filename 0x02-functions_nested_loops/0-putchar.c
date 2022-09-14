#include "main.h"
#include <stdio.h>
/**
 * main - prints _putchar
 * Return: 0
 */
int main(void)
{
	char name[8] = "_putchar";
	for (int i = 0; i <= 7; i++)
	{
	_putchar(name[i]);
	}
	_putchar('\n')
return (0);
}
