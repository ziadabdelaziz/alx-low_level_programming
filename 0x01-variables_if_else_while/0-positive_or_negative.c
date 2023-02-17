#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int r = rand();

	if (r > 0)
	{
		printf("%d is positive\n", r);
	}
	else if (r < 0)
	{
		printf("%d is negative\n", r);
	}
	else
	{
		printf("%d is zero\n", r);
	}
	return (0);
}
