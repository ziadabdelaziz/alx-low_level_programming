#include "main.h"

/**
* print_sign - number polarity
* @n: number
* Describtion: check number polarity
* Return: if n > zero 0 else if zero 0 else -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
