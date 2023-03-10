#include "main.h"

/**
* is_prime - check the number is prime
* @n: integer
* @i: integer
* Return: integer
*/
int is_prime(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime(n, i + 2));
}

/**
* is_prime_number - check prime
* @n: integer
* Return: integer
*/
int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	if (n < 2 || n % 2 == 0)
		return (0);

	return (is_prime(n, 3));
}
