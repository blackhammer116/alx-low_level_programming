#include <stdio.h>
#include <stdlib.h>
/**
 *
 */
int main(int argc, char *argv[])
{
	int cents, Q, D, P, N, C, change;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if(cents < 0)
	{
		printf("0\n");
		return (0);
	}
	Q = cents / 25;
	cents = cents - (Q * 25);
	D = cents / 10;
	N = cents / 5;
	cents = cents - (N * 5);
	C = cents / 2;
	cents -= (C * 2);
	P = cents / 1;
	change = Q + D + N + C + P;
	printf("%d\n", change);
	return (0);
}
