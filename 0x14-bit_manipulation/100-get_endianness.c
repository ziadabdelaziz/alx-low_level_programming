#include "main.h"

/**
 * get_endianness - check endianess of system.
 * Return: 1 if big endian, 0 if little endian.
 */
int get_endianness(void)
{
	short int i;
	char *p;

	i = 1;
	p = (char *)&i;

	if (*p == 1)
		return (0);
	else
		return (1);
}
