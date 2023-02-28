#include <stdio.h>
#include "main.h"

/**
* print_array - print elements of array
* @str: pointer to string beginning
* Return: 0 indicates successfull execution
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
