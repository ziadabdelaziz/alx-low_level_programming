#include "main.h"

/**
* _memset - set memory
* @s: pointer to memory area
* @b: constant char
* @n: number of bytes to be filled
* Return: pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for(i = 0; *(s + i) != '\0' && i < n; i++)
		*(s + i) = b;

	return (s);
}
