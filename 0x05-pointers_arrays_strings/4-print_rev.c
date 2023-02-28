#include "main.h"

/**
* print_rev - print string reversed
* @s: pointer to string beginning
* Return: 0 indicates successfull execution
*/
void print_rev(char *s)
{
	char *c;

	for (c = s; *c != '\0'; c++)

	while (c >= s)
	{
		c--;
		_putchar(*c);
	}
	_putchar('\n');
}
