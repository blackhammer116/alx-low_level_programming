#include "main.h"
/**
 * check_prime - checks if the number is prime
 * @n: passed parameter
 * @i: iterative parameter
 * is_prime_number: determines if the number passed is prime or
 * not
 * @n: number to be checked
 * Return: returns check_prime function
 */
int check_prime(int n, int i);

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - checks if the number passed is prime
 * or not
 * @n: passed number
 * @i:iterative parameter
 * Return: returns 0 if not 1 if its prime.
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
