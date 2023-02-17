#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - program starting point
* Description: get the last digit of a number
* and check if it's not 5
* Return: 0 indicates successful execution
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last = n%10;
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last);
	}
	else if (last < 6 && last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
	}
	return (0);
}
