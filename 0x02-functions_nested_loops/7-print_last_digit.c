#include "main.h"

/**
* print_last_digit - last digit
* @n: number
* Describtion: print and return the last digit of number
* Return: last digit
*/
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last = -last;
	_putchar('0' + last);
	return (last);
}
