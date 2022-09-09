#include <stdio.h>
/**
 *Description: main - will show size of DT.
 *
 * Return: 0 if functional
 */
int main(void)
{
printf("size of a char: %d byte(s)\n",sizeof(char));
printf("size of an int: %d byte(s)\n",sizeof(int));
printf("size of a long int: %d byte(s)\n",sizeof(long int));
printf("size of a long long int: %d byte(s)\n",sizeof(long long int));
printf("size of a float: %d byte(s)",sizeof(float));
return (0);
}
