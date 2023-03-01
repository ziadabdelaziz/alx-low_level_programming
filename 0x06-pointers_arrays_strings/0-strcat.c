#include "main.h"

/**
* _strcat - concatinate string
* @dest: string
* @src: string
* Return: 0 indicates successfull execution
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int init;

	init = 0;
	while (*(dest + init) != '\0')
		init++;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + init + i) = *(src + i);

	*(dest + init + i) = '\0';

	return (dest);
}
