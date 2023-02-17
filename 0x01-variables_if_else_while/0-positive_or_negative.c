#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - starting point
* Description: identify the polarity of random number
* Return: 0 indicate successful execution
*/
int main(void)
{
	int r;

	srand(time(0));
	r = rand() - RAND_MAX / 2;

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
