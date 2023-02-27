#include "main.h"

/**
* _strlen - return string length
* @s: string
* Return: 0 indicates successfull execution
*/
int _strlen(char *s)
{
	char *c;
	int len;

	len = 0;
	for (c = s; *c != '\0'; c++)
		len++;

	return (len);
}
