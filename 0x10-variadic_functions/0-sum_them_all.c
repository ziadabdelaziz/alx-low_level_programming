#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
* sum_them_all - return sum of arguments
* @n: integer
* Return: 0 - success
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int i, sum;

	if (n == 0)
		return (0);

	va_start(valist, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
