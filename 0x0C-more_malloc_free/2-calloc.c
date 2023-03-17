#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - allocate memory
* @nmemb: number of members
* @size: number of bytes for each member
* Return: allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memo;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memo = malloc(nmemb * size);
	if (memo == NULL)
		return (NULL);

	return (memo);
}
