#include "main.h"

/**
 * flip_bits - binary difference.
 * @n: unsigned long int input.
 * @m: unsigned long int input.
 * Return: number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt;
	unsigned long int i;

	cnt = 0;
	for (i = 0; i < 64; i++)
	{
		if ((n & (1 << i)) ^ (m & (1 << i)))
			cnt++;
	}

	return (cnt / 2);
}
