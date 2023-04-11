#include "main.h"

/**
 * set_bit - change a value of a bit
 * given it's index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 * Return: 1 if success, -1 if not.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index > 63)
		return (-1);

	b = 1 << index;
	*n = (*n | b);

	return (1);
}
