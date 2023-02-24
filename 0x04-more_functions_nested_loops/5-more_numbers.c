#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int i;
	int j;
	int temp;
	for (j = 0; j < 10; j++)
	{
		for (i = 48; i <= 62; i++)
		{
			temp = i;
			if (i > 57)
			{
				_putchar('1');
				temp -= 10;
			}
			_putchar(temp);
		}
		_putchar('\n');
	}
}
