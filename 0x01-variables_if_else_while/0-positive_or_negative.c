#include <stdlib.h>

#include <time.h>
#include <stdio.h>

/* more headers goes there */



/**
* Description: main - sets a random value to variable n
* and checks if it's positive zero oor negative. 
*
*Return: 0 if functional.
*/

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

				if(n == 0)
				{
				printf(" %d is zero", n);
				}
				else if(n < 0)
				{
				printf(" %d is negative", n);
				}
				else 
				{
				printf(" %d is positive", n);
				}
					/* your code goes there */

					return (0);

}
