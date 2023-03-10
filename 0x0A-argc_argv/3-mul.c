#include <stdio.h>

/**
* main - program starting point
* @argc: number of arguments
* @argv: list of argucments
* Return: 0 - successfull execution
*/
int main(int argc, char *argv[])
{
	if (argc > 3 || argc < 3)
		printf("Error\n");
	else
		printf("%d\n", (argv[1][0] - 48) * (argv[2][0] - 48));

	return (0);
}
