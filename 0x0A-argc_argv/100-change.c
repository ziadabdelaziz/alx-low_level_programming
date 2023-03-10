#include <stdlib.h>
#include <stdio.h>

/**
* main - program starting point
* @argc: number of arguments
* @argv: list of argucments
* Return: 0 - successfull execution
*/
int main(int argc, char *argv[])
{
	int cnt, amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	cnt = 0;
	while (amount > 0)
	{
		if (amount >= 25)
			amount -= 25;
		else if (amount >= 10)
			amount -= 10;
		else if (amount >= 5)
			amount -= 5;
		else if (amount >= 2)
			amount -= 2;
		else
			amount -= 1;
		cnt++;
	}

	if (amount < 0)
		printf("0\n");
	else
		printf("%d\n", cnt);
	return (0);
}
