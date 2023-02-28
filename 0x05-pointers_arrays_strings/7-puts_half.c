#include "main.h"

/**
* puts_half - print second half of string
* @str: pointer to string beginning
* Return: 0 indicates successfull execution
*/
void puts_half(char *str)
{
	int len;
	int half;

	len = 0;
	while (str[len] != '\0')
		len++;

	half = len / 2;
	if (len % 2 != 0)
		half++;

	while (half < len)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
