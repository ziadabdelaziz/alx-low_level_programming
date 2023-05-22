#include "main.h"

/**
* _strncpy - copy string
* @dest: string
* @src: string
* @n: number of bytes copies at most
* Return: 0 indicates successfull execution
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
