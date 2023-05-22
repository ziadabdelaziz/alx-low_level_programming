#include "main.h"

/**
* _memcpy - copy memory area
* @dest: memory area to copy to
* @src: memory area to be copied from
* @n: number of bytes to be copied
* Return: pointer to memory area dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
