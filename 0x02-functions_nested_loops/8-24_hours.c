#include "main.h"

/**
* jack_bauer - 00:00 to 23:59
* Describtion: print every minute of the day
* Return: void
*/
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
		for (j = 0; j < 60; j++)
			{
				_putchar('0' + (i / 10));
				_putchar('0' + (i % 10));
				_putchar(':');
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
			}
}

