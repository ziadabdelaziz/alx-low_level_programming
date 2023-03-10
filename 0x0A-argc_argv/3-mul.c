#include <stdio.h>

/**
* main - program starting point
* @argc: number of arguments
* @argv: list of argucments
* Return: 0 - successfull execution
*/
int main(int argc, char *argv[])
{
	int a, b;

	if (argc > 3 || argc < 3)
	{
	printf("Error\n");
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}

	return (0);
}
