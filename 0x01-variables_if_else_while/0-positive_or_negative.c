#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	long int r = rand();

	if (r > 0)
	{
		printf("%ld is positive\n", r);
	}
	else if (r < 0)
	{
		printf("%ld is negative\n", r);
	}
	else
	{
		printf("%ld is zero\n", r);
	}
	return (0);
}
