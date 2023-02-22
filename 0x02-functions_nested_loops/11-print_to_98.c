#include "main.h"
#include <stdio.h>

/**
*
*/
void print_to_98(int n)
{
	int step;

	step = n > 98 ? -1 : 1;

	while (n != 98)
	{
		printf("%d", n);
		n += step;
		if ((n > 98 && !step) || (n < 98 && step))
			printf(", ");
	}
	if (n == 98)
		printf("%d", n);
	putchar('\n');
}
