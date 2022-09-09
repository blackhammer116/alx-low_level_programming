#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**Description: main - checks if n's last digit is greater than five or 0 or less than 6 and not equal to zero.
 *
 *Return: 0 if functional
 */
int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
				if (n%10 > 5)
				{
				printf("Last digit of %d is and is greater than 5\n", n);
				}
				else if (n%10 == 0 )
				{
				printf("Last digit of %d is and is 0\n", n);
				}
				else if (n%10 <6 && n%10 !=0)
				{
				printf("Last digit of %d is and is less than 6 and not 0\n", n);
				}
					return (0);

}
