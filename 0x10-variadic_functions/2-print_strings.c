#include "variadic_functions.h"

/**
* print_strings - print arguments separated
* @separator: strings separator
* @n: number of arguments
* Return: None
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(valist, char *));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
