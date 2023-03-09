#include "main.h"

/**
* factorial - print factorial
* @n: integer
* Return: None
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
