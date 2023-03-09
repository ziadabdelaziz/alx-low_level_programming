#include "main.h"

/**
* _puts_recursion - print string
* @s: string
* Return: None
*/
void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
}
