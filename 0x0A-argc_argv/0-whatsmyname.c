#include "main.h"

/**
* main - program starting point
* @argc: number of arguments
* @argv: list of argucments
* Return: 0 - successfull execution
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argv[0][i] != '\0'; i++)
		_putchar(argv[0][i]);
	_putchar('\n');
}
