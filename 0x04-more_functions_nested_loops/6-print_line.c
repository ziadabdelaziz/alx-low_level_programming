#include "main.h"

/**
 * print_line - prints straight line n times.
 * @n: times straight line is printed.
 * Return: no return.
 */
void print_line(int n)
{
	int i;

	while (n > 0 && i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
