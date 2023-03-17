#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - concatinate two strings with length
* @s1: string
* @s2: string
* @n: integer
* Return: concatinated strings
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *memo;
	unsigned int i, index, len1, len2;

	if (!s1 && !s2)
		return (0);

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";


	len1 = 0;
	len2 = 0;

	for (i = 0; *(s1 + i) != '\0'; i++)
		len1++;

	for (i = 0; *(s2 + i) != '\0'; i++)
		len2++;

	memo = malloc(len1 + len2 + 1);
	if (memo == 0)
		return (0);

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(memo + index) = *(s1 + i);
		index++;
	}

	for (i = 0; *(s2 + i) != '\0' && i < n; i++)
	{
		*(memo + index) = *(s2 + i);
		index++;
	}

	*(memo + index) = '\0';

	return (memo);
}
