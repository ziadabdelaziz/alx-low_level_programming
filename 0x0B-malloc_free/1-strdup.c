#include <stdlib.h>
#include "main.h"

/**
* _strdup - copy string
* @str: string
* Return: pointer to copied string
* if size = 0 -> NULL
*/
char *_strdup(char *str)
{
	char *new;
	int i, len;

	if (!str)
		return (0);

	len = 0;
	for (i = 0; *(str + i) != '\0'; i++)
		len++;

	new = (char *) malloc(len + 1);
	if (!new)
		return (0);

	for (i = 0; *(str + i) != '\0'; i++)
		*(new + i) = *(str + i);
	*(new + i) = '\0';

	return (new);
}
