#include "main.h"

/**
* _strspn - length of prefix substring
* @s: string
* @accept: string
* Return: matching characters in s from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;
	int included;

	i = 0;
	j = 0;
	included = 1;
	for (i = 0; *(s + i) != '\0' && included; i++)
	{
		included = 0;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				included = 1;
				count++;
				break;
			}
		}
	}
	return (count);
}
