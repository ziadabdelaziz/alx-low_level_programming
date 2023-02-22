#include "main.h"

/**
* times_table - print times table
* Describtion: prints all numbers from times table 
* Return: void
*/
void times_table(void)
{
	int i;
	int j;
	int mult;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
		{
			mult = i * j;
			if (mult < 9 && j != 0)
				_putchar(' ');

			if (mult > 9)
			{
				_putchar('0' + mult / 10);
				_putchar('0' + mult % 10);
			}
			else
				_putchar('0' + mult);


			if (j == 9)
			{
				_putchar('$');
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}

}
