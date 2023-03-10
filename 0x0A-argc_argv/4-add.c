#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
* main - program starting point
* @argc: number of arguments
* @argv: list of argucments
* Return: 0 - successfull execution
*/
int main(int argc, char *argv[])
{
	int i, j, sum;


	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) || argv[i][j] == '-')
				continue;

			printf("Error");
			return (0);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
