#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	unsigned int i, expon;

	for (i = 0; b[i] != '\0'; i++)
		if (b[i] != '1' && b[i] != '0')
			return (0);

	result = 0;
	for (expon = 1; i > 0; i--, expon *= 2)
	{
		if (b[i - 1] == '1')
			result += expon;
		else if (b[i - 1] == '0')
			continue;
		else
			return (0);
	}

	return (result);
}
