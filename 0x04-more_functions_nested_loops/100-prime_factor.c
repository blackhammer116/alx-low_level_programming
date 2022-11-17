#include "main.h"
/**
 * main - calculates largest prime factor of the given number
 * Return: 0 
 */
int main(void)
{
	long int num = 612852475143;
	long int i;

	for (i = 2; i < num; i++)
	{
		if ((num % 1) == 0)
			num = num / i;
	}
	printf("%ld\n", i);
	return (0);
}
