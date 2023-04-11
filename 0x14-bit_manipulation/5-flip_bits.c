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

	for (cnt = 0; n | m; n <<= 1, m <<= 1)
	{
		if ((n & 1) != (m & 1))
			cnt++;
	}

	return (cnt);
}
