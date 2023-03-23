#include <stdio.h>
#include "function_pointers.h"

/**
* int_index - search for an element
* @array: array of integers
* @size: size of the array
* @cmp: comparison function
* Return: index of the element -1 other wise
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (cmp == NULL || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
