#include <stdlib.h>
#include "main.h"

/**
* create_array - allocate and return array of chars
* @size: number of elements
* @c: character
* Return: pointer to array of characters
* if size = 0 -> NULL
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (!size)
		return (0);

	arr = (char *) malloc(size);
	for (i = 0;i < size; i++)
		*(arr + i) = c;
	*(arr + i) = '\0';

	return (arr);
}
