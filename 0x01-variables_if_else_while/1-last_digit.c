#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Description: main - check conditions.
 *
 *Return: 0
 */
int main(void)
{

		int n;
		char str[] = "Last digit";

			srand(time(0));

				n = rand() - RAND_MAX / 2;
				if (n % 10 > 5)
					printf("%s of %d is %d and is greater than 5\n", str, n, n % 10);
				else if (n % 10 == 0)
					printf("Last digit of %d is %d and is 0\n", n, n % 10);
				else if (n % 10 < 6 && n % 10 != 0)
					printf("%s of %d is %d and is less than 6 and not 0\n", str, n, n % 10);
				return (0);
}
