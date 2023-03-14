#include <stdlib.h>
#include "main.h"

/**
* _strdup - copy string
* @str: string
* Return: pointer to copied string
* if size = 0 -> NULL
*/
char *str_concat(char *s1, char *s2)
{
	char *new;
	int i, j, len1, len2;

	if (!s1 && !s2)
		return (0);

	len1 = 0;
	for (i = 0; *(s1 + i) != '\0'; i++)
		len1++;

	len2 = 0;
	for (i = 0; *(s2 + i) != '\0'; i++)
		len2++;

	new = (char *) malloc(len1 + len2 + 1);
	if (!new)
		return (0);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(new + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++, i++)
		*(new + i) = *(s2 + j);

	*(new + i) = '\0';

	return (new);
}
