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

	last = _abs(n % 10);
	_putchar('0' + last);
	return (last);
}
