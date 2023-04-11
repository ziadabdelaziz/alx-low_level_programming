#include "main.h"

/**
 * clear_bit - change a value of a bit
 * given it's index to 0.
 * @n: unsigned long int input.
 * @index: index of the bit.
 * Return: value of the bit.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index > 63)
		return (-1);

	b = 1 << index;

	if (*n & b)
		*n = (*n ^ b);

	return (1);
}
