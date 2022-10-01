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
	if (argc == 1 || argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
