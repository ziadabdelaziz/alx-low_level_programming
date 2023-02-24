#include "main.h"

/**
 * print_numbers - prints most numbers.
 * Describtion: prints from 0 to 9.
 * except 2 and 4.
 * Return: no return.
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if ( i == '2' || i == '4')
			continue;

		_putchar(i);
	}

	_putchar('\n');
}
