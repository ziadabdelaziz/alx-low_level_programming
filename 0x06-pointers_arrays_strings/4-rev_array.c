#include "main.h"

/**
* reverse_array - reverse array
* @a: array
* @n: length
* Return: 0 indicates successfull execution
*/
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j++;
	}
}
