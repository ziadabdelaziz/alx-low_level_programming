#include "main.h"

/**
* _strcat - concatinate string with limit
* @dest: string
* @src: string
* @n: number of bytes used at most
* Return: 0 indicates successfull execution
*/
char *_strcat(char *dest, char *src, int n)
{
	int i;
	int init;

	init = 0;
	while (*(dest + init) != '\0')
		init++;

	for (i = 0; *(src + i) != '\0' && i < n - 1; i++)
		*(dest + init + i) = *(src + i);

	*(dest + init + i) = '\0';

	return (dest);
}
