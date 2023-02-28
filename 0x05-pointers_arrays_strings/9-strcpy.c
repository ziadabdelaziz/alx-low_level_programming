#include "main.h"

/**
* _strcpy - print every other character
* @dest: buffer
* @src: string
* Return: 0 indicates successfull execution
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i - 1] != '\0'; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
