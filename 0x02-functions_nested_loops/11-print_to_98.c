#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints numbers to 98
* @n: integer number
* Describtion: prints numbers from n to 98
* Return: None
*/
void print_to_98(int n)
{
	int step;

	step = n > 98 ? -1 : 1;

	while (n != 98)
	{
		printf("%d", n);
		n += step;
		printf(", ");
	}
	printf("%d", 98);
	putchar('\n');
}
