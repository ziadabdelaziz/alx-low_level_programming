#include "main.h"

/**
* get_sqrt - return x raised to the power of y
* @n: integer
* @i: integer
* Return: -1 if not possible, number other wise
*/
int get_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return i;

	return get_sqrt(n, i + 1);
}


/**
* _pow_recursion - return x raised to the power of y
* @x: integer
* @y: integer
* Return: integer
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	if (n >= 2)
		get_sqrt(n, 2);
}


