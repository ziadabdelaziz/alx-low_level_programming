#include <stdio.h>
#include "main.h"

/**
* print_array - print elements of array
* @a: array
* @n: length of array
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
