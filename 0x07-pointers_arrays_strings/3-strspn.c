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
	bool included;

	included = true;
	for (i = 0; *(s + i) != '\0' && included; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				included = true;
				count++;
				break;
			}
			included = false;
		}
	}

	return (count);
}
