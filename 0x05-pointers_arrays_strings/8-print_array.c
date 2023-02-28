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
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	_putchar('\n');
}
