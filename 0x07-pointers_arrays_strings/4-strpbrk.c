#include "main.h"

/**
* _strpbrk - first match
* @s: string
* @accept: string
* Return: matching characters in s from accept
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j, search;

	search = 1;
	for (i = 0; *(s + i) != '\0' && search; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				search = 0;
				break;
			}
		}
	}

	if (search)
		return ('\0');
	else
		return (s + i);
}

