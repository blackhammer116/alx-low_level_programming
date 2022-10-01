#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds two positive integers
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *check = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		sum += strtol(argv[i], &check, 10);
		if (*check != 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
