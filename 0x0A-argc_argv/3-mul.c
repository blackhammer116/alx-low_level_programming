#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the product of the integer arguments
 * @argc: argument count
 * @argv: array of arguments
 * Return: 1 if it reads error 0 if successful
 */
int main(int argc, char *argv[])
{
	int i;
	long int result;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%ld\n", result);
	}
	return (0);
}
