#include "main.h"

/**
* _strncat - concatinate string with limit
* @dest: string
* @src: string
* @n: number of bytes used at most
* Return: 0 indicates successfull execution
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int init;

	init = 0;
	while (*(dest + init) != '\0')
		init++;

	for (i = 0; *(src + i) != '\0' && i < n; i++)
		*(dest + init + i) = *(src + i);

	*(dest + init + i) = '\0';

	return (dest);
}
