#include "variadic_functions.h"

/**
* print_numbers - print arguments separated
* @separator: string to separate numbers
* @n: number of arguments
* Return: None
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (n == 0)
		return;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
