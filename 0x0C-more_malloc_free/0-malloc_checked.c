#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - check memory allocation success
* @b: unsigned integer
* Return: pointer to allocated space
*/
void *malloc_checked(unsigned int b)
{
	void *memo = malloc(b);
	if (memo == 0)
		exit(98);
	return (memo);
}
