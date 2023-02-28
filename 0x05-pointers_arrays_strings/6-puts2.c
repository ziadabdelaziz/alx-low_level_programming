#include "main.h"

/**
* puts2 - print every other character
* @str: pointer to string beginning
* Return: 0 indicates successfull execution
*/
void puts2(char *str)
{
	int ndx;

	ndx = 0;
	while (str[ndx + 1] != '\0' && str[ndx] != '\0')
	{
		_putchar(str[ndx]);
		ndx += 2;
	}
	if (str[ndx + 1] == '\0')
		_putchar(str[ndx]);
	_putchar('\n');
}
