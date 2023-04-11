#include "main.h"

/**
 * get_endianness - check endianess of system.
 * Return: 1 if big endian, 0 if little endian.
 */
int get_endianness(void)
{
	unsigned int i;
	char *p;

	i = 1;
	p = (char *)&i;

	if ((int)*p)
		return (1);
	else
		return (0);
}
