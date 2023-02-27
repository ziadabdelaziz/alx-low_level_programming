#include "main.h"

/**
* _puts - print string
* @str: pointer to string beginning
* Return: 0 indicates successfull execution
*/
void _puts(char *str)
{
	char *c;

	for (c = str; *c != '\0'; c++)
		_putchar(*c);
}
