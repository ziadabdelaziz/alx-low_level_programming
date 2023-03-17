#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - allocate array for range of integers
* @min: fist member
* @max: last member
* Return: allocated array of integers
*/
int *array_range(int min, int max)
{
	int len, i;
	int *arr;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	arr = malloc(len * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i + min <= max; i++)
		arr[i] = min + i;

	return (arr);
}
