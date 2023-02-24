#include "main.h"

/**
 * print_square - prints hashes squares.
 * @size: size of the square.
 * Return: no return.
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
			_putchar('#');
		_putchar('\n');
	}
}
