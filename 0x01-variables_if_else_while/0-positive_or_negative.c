#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int r;
	srand(time(NULL));
	r = rand();

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
