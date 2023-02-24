#include "main.h"

/**
 * print_square - prints hashes squares.
 * @size: size of the square.
 * Return: no return.
 */
void print_square(int size)
{
	int i;
	int j;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
